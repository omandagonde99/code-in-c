# Recursive Factorial Logic

1. Take a number as input from the user.

2. Create a recursive function to calculate factorial.

3. Factorial means:

   n! = n × (n-1) × (n-2) × ... × 1

4. Define the base condition:

   if(n == 0 || n == 1)

5. Return `1` when the base condition becomes true because:

   0! = 1
   1! = 1

6. Otherwise, return:

   n * factorial(n - 1)

7. The function keeps calling itself with smaller values until the base condition is reached.

8. After reaching the base condition, recursive calls return one by one and multiplication happens.

# Example

Factorial of 5:

5 × 4 × 3 × 2 × 1

Output:
120

# Recursive Flow

factorial(5)
→ 5 × factorial(4)
→ 4 × factorial(3)
→ 3 × factorial(2)
→ 2 × factorial(1)
→ 1

# Main Concept

- Recursion means a function calling itself.
- The base condition stops recursive calls.
- Each function call multiplies the current number with factorial of the previous number.
