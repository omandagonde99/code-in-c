# Pascal Triangle

Pascal Triangle is a triangular number pattern where:

- First and last element of every row is `1`
- Middle elements are obtained by adding two numbers from the previous row

## Example

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

## Logic

1. Use an outer loop to control rows
2. Use an inner loop to print elements in each row
3. Initialize `value = 1` for every row
4. Print current value
5. Calculate next value using:

value = value * (i - j) / (j + 1)

6. Move to next line after completing each row

This method generates Pascal Triangle efficiently without using factorials.
