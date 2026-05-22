# Read and Print Array Elements Logic

1. Start by taking the size of the array from the user.

2. Declare an array to store multiple elements.
   - Example:
     
     int arr[100];

   This means the array can store up to 100 integer values.

3. Use a loop to read array elements from the user.
   - The loop starts from index `0`.
   - It runs until `size - 1`.

4. Store each value using:

   arr[i]

   where `i` represents the index position of the array.

5. After storing all elements, use another loop to print the array elements.

6. The second loop also starts from `0` and runs up to `size - 1`.

7. Print each element one by one using:

   printf("%d", arr[i]);

# Example

Input:
5

Array Elements:
10 20 30 40 50

Output:
10 20 30 40 50

# Main Concept

- Arrays are used to store multiple values of the same data type.
- Indexing in arrays starts from `0`.
- The first loop stores elements.
- The second loop prints stored elements.
