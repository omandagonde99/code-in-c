# Count Even and Odd Elements in Array Logic

1. Take the size of the array from the user.

2. Use a loop to store array elements.

3. Declare two variables:
   - `even = 0`
   - `odd = 0`

4. Traverse the array using a loop.

5. Check each element using:

   arr[i] % 2 == 0

6. If the condition is true:
   - the element is even
   - increment the even counter

7. Otherwise:
   - the element is odd
   - increment the odd counter

8. After checking all elements, print the total even and odd counts.

# Example

Array:
10 15 20 25 30

Even Elements:
10 20 30

Odd Elements:
15 25

Output:
Even Count = 3
Odd Count = 2

# Main Concept

- Even numbers are divisible by 2.
- Odd numbers are not divisible by 2.
- Each array element is checked one by one and counted accordingly.
