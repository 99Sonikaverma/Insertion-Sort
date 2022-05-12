# Insertion sort in Python


def insertionSorting(array):
    for steps in range(1, len(array)):
        keys = array[steps]
        j = steps - 1

        # Compare all the keys with each element on the left of it until an element smaller than it is found
        # For descending order, change the keys<array[j] to keys>array[j].
        while j >= 0 and keys < array[j]:
            array[j + 1] = array[j]
            j = j - 1

        # Place key at after the element just smaller than it.
        array[j + 1] = keys


data_items = [9, 5, 1, 4, 3]
insertionSorting(data_items)
print('Sorted Array in its Ascending Order:')
print(data_items)