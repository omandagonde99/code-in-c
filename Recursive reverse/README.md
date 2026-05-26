# Recursive Reverse Number Logic

1. Take a number as input from the user.

2. Create a recursive function to reverse the number.

3. Extract the last digit using:

   n % 10

4. Store the digit into the reverse number using:

   rev = rev * 10 + (n % 10)

5. Remove the last digit from the number using:

   n / 10

6. Call the recursive function again with the remaining number.

7. Continue the recursive calls until the number becomes `0`.

8. Define the base condition:

   if(n == 0)

9. After reaching the base condition, stop recursion.

10. Print the reversed number.

# Example

Original Number:
1234

Reverse Number:
4321

# Recursive Flow

reverse(1234)
→ reverse(123)
→ reverse(12)
→ reverse(1)
→ reverse(0)

# Main Concept

- `% 10` extracts the last digit.
- `/ 10` removes the last digit.
- Recursion continues until the number becomes `0`.
- Digits are stored in reverse order to create the reversed number.
