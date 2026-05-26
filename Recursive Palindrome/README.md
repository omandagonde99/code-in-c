# Recursive Palindrome Number Logic

1. Take a number as input from the user.

2. Store the original number in another variable.

3. Create a recursive function to reverse the number.

4. Extract the last digit using:

   n % 10

5. Store the digit into the reverse number using:

   rev = rev * 10 + (n % 10)

6. Remove the last digit using:

   n / 10

7. Call the recursive function again with the remaining number.

8. Continue recursion until the number becomes `0`.

9. Define the base condition:

   if(n == 0)

10. After recursion ends, compare:
    - original number
    - reversed number

11. If both are equal:
    - number is palindrome

12. Otherwise:
    - number is not palindrome

# Example

Original Number:
121

Reverse Number:
121

Output:
Palindrome Number

# Recursive Flow

reverse(121)
→ reverse(12)
→ reverse(1)
→ reverse(0)

# Main Concept

- A palindrome number reads the same forward and backward.
- Recursion is used to reverse the number.
- The original and reversed numbers are compared to check palindrome.
