# Insert Element Into Array Logic

1. Take the size of the array from the user.

2. Use a loop to store array elements.

3. Take:
   - the position where the element should be inserted
   - the new element value

4. Arrays cannot directly create empty spaces, so elements must be shifted one position to the right.

5. Start shifting from the last element of the array.

6. Use the logic:

   arr[i] = arr[i - 1]

   This moves each element one position to the right.

7. Continue shifting until the required insertion position becomes empty.

8. Insert the new element at:

   arr[pos - 1]

9. Increase the array size by 1 because a new element is added.

10. Print the updated array.

# Example

Original Array:
10 20 40 50

Insert:
30 at position 3

Updated Array:
10 20 30 40 50

# Main Concept

- Insertion requires creating an empty space.
- Existing elements are shifted right.
- The new element is placed at the required position.
