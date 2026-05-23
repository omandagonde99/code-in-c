# Find Second Largest Element in Array Logic

1. Take the size of the array from the user.

2. Use a loop to store array elements.

3. Declare two variables:
   - `largest`
   - `secondLargest`

4. Assume the first array element as both:
   
   largest = arr[0]
   secondLargest = arr[0]

5. Traverse the array using a loop.

6. Check if the current element is greater than `largest`.

   if(arr[i] > largest)

7. If true:
   - move the current largest value into `secondLargest`
   - update `largest` with the current element

8. Otherwise, check:

   arr[i] > secondLargest && arr[i] != largest

9. If the condition is true:
   - update `secondLargest`

10. After checking all elements, print the second largest element.

# Example

Array:
10 50 20 40 30

Largest Element:
50

Second Largest Element:
40

# Main Concept

- Keep track of both largest and second largest values.
- Update values whenever a bigger element is found.
- Avoid storing the same largest value as second largest.
