# Alphabet Triangle Pattern Logic

1. Start by taking the number of rows as input from the user.

2. Use an outer loop to control the number of rows in the pattern.
   - The outer loop starts from `1` and runs up to the given number of rows.

3. Inside the outer loop, use an inner loop to print alphabets in each row.
   - The inner loop starts from `0` and runs less than the current row number.

4. Print alphabets using:
   
   'A' + j

   because characters in C are stored using ASCII values.
   - 'A' represents ASCII value 65
   - 'A' + 1 gives B
   - 'A' + 2 gives C
   - and so on.

5. For every row:
   - Row 1 prints 1 alphabet
   - Row 2 prints 2 alphabets
   - Row 3 prints 3 alphabets
   - and so on.

6. After printing all alphabets in one row, move to the next line using `\n`.

# Example

Input:
5

Output:

A
A B
A B C
A B C D
A B C D E

# Main Concept

- Outer loop controls rows.
- Inner loop controls alphabets in each row.
- `'A' + j` is used to generate sequential alphabets.
