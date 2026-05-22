# Merge Two Arrays Logic

1. Take the size of the first array and second array from the user.

2. Use loops to store elements of both arrays separately.

3. Create a third array (merge array) to store combined elements.

4. Copy all elements of the first array into the merge array:
   - Use a loop from 0 to size1 - 1
   - Store values using: merge[k] = arr1[i]
   - Increment k after each insertion

5. Copy all elements of the second array into the merge array:
   - Use a loop from 0 to size2 - 1
   - Store values using: merge[k] = arr2[i]
   - Increment k after each insertion

6. Now the merge array contains all elements of both arrays in sequence.

7. Use a loop to print the merged array elements.

# Example

Array 1:
10 20 30

Array 2:
40 50 60

Merged Array:
10 20 30 40 50 60

# Main Concept

- Two arrays are combined into a single array.
- First array elements are copied first.
- Then second array elements are added at the end.
