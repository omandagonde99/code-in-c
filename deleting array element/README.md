# Delete Element at Specific Position Logic

1. Take the size of the array from the user.

2. Use a loop to store array elements.

3. Take the position of the element to delete.

4. Arrays cannot leave empty spaces after deletion, so all next elements must shift one position to the left.

5. Start a loop from:

   pos - 1

   because array indexing starts from `0`.

6. Shift elements using:

   arr[i] = arr[i + 1]

   This copies the next element into the current position.

7. Continue shifting until the last element.

8. Decrease the array size by 1 because one element is removed.

9. Print the updated array.

# Example

Original Array:
10 20 30 40 50

Delete Position:
3

Updated Array:
10 20 40 50

# Main Concept

- Deleting an element creates an empty gap.
- Remaining elements are shifted left to fill the gap.
- Array size is reduced after deletion.
