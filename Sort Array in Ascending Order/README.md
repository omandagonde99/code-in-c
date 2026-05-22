# Sort Array in Ascending Order Logic

1. Take the size of the array from the user.

2. Use a loop to store array elements.

3. Use two loops to compare array elements.
   - The outer loop selects the current element.
   - The inner loop compares it with the remaining elements.

4. Check the condition:

   if(arr[i] > arr[j])

   This means if the left element is greater than the right element.

5. If the condition is true, swap both elements using a temporary variable.

6. Continue the comparison process until all elements are arranged in ascending order.

7. After sorting, print the array elements.

# Swapping Logic

temp = arr[i]
arr[i] = arr[j]
arr[j] = temp

# Example

Before Sorting:
50 20 40 10 30

After Sorting:
10 20 30 40 50

# Main Concept

- Compare elements one by one.
- Swap elements when they are in the wrong order.
- Repeating this process arranges the array from smallest to largest.
