# Number Triangle Pattern Logic

1. Start by taking the number of rows as input.

2. Use an outer loop to control how many rows will be printed.
   - The outer loop starts from `1` and runs up to the given number of rows.

3. Inside the outer loop, use another loop (inner loop) to print numbers in each row.

4. The inner loop starts from `1` and runs up to the current row number.
   - For row 1 → print 1 number
   - For row 2 → print 2 numbers
   - For row 3 → print 3 numbers
   - and so on.

5. Print the value of `j` inside the inner loop.
   - This creates the increasing number pattern in every row.

6. After printing one complete row, move the cursor to the next line using `\n`.

# Example

Input:
5

Output:

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
