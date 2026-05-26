# Recursive Fibonacci Logic

1. Take the number of terms as input from the user.

2. Create a recursive function to generate Fibonacci numbers.

3. Fibonacci series means:
   each number is the sum of the previous two numbers.

4. Define the base conditions:

   if(n == 0)
       return 0

   if(n == 1)
       return 1

5. Otherwise, return:

   fibonacci(n - 1) + fibonacci(n - 2)

6. The function keeps calling itself with smaller values until the base condition is reached.

7. After reaching the base condition, recursive calls return values and calculate the Fibonacci series.

# Example

Fibonacci Series:

0 1 1 2 3 5 8 13

# Recursive Flow

fibonacci(5)
→ fibonacci(4) + fibonacci(3)
→ fibonacci(3) + fibonacci(2)
→ fibonacci(2) + fibonacci(1)

# Main Concept

- Recursion means a function calling itself.
- Fibonacci numbers are generated using the sum of previous two numbers.
- Base conditions stop infinite recursive calls.
