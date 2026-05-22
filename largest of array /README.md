# Find Largest Element in Array Logic

1. Start by taking the size of the array from the user.

2. Declare an array to store the elements.

3. Use a loop to read all array elements from the user.

4. Assume the first element of the array is the largest element.

   largest = arr[0]

5. Use another loop to compare the remaining elements with the current largest value.

6. For every element, check:

   if(arr[i] > largest)

   If the condition is true, update the value of `largest`.

7. Continue checking until all elements are compared.

8. After the loop ends, the variable `largest` will contain the biggest element in the array.

# Example

Input:
5

Array Elements:
10 45 20 99 30

Output:
99

# Main Concept

- Arrays are used to store multiple values.
- The first element is initially assumed as the largest.
- Every element is compared one by one.
- If a bigger element is found, the largest value is updated.
