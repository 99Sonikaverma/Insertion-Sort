// Insertion sort in C++

#include <iostream>
using namespace std;

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSorting(int array[], int size) {
  for (int steps = 1; steps < size; steps++) {
    int key = array[steps];
    int k = steps - 1;

    // Compare key with each element on the left of it until an element smaller than it is found.
    // For descending order, change key<array[k] to key>array[k].
    while (key < array[k] && k >= 0) {
      array[k + 1] = array[k];
      --k;
    }
    array[k + 1] = key;
  }
}

// Driver code
int main() {
  int data_item[] = {9, 5, 1, 4, 3};
  int size = sizeof(data_item) / sizeof(data_item[0]);
  insertionSorting(data_item, size);
  cout << "Sorted array in ascending order:\n";
  printArray(data_item, size);
}
