# Search Element in Array Logic

1. Take the size of the array from the user.

2. Use a loop to store array elements.

3. Take the element to search from the user.

4. Use another loop to check each array element one by one.

5. Compare the current array element with the search element using:

   if(arr[i] == search)

6. If both values are equal:
   - the element is found
   - set a flag variable
   - stop the loop using `break`

7. After checking all elements:
   - if the flag value indicates success, print "Element found"
   - otherwise print "Element not found"

# Example

Array:
10 20 30 40 50

Search Element:
30

Output:
Element found

# Main Concept

- Traverse the array element by element.
- Compare every element with the search value.
- If a match is found, the element exists in the array.
