# Diamond Pattern Logic

1. Start by taking the number of rows as input from the user.

2. A diamond pattern is divided into two parts:
   - Upper pyramid
   - Lower inverted pyramid

3. Use separate loops for both parts.

# Upper Pyramid Logic

1. Use an outer loop to control the rows from `1` to `rows`.

2. For every row:
   - First print spaces.
   - Then print stars.

3. Spaces are printed using the formula:

   spaces = rows - i

   This decreases spaces in every row.

4. Stars are printed using the formula:

   stars = 2 * i - 1

   This increases stars in every row.
   - Row 1 → 1 star
   - Row 2 → 3 stars
   - Row 3 → 5 stars
   - and so on.

5. After printing spaces and stars, move to the next line.

# Lower Inverted Pyramid Logic

1. Use another outer loop starting from:

   rows - 1 down to 1

2. For every row:
   - First print spaces.
   - Then print stars.

3. Spaces increase in every row.

4. Stars decrease in every row using:

   stars = 2 * i - 1

5. Move to the next line after printing one complete row.

# Example

Input:
5

Output:

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

# Main Concept

- Outer loops control rows.
- Inner loops control spaces and stars.
- The upper part creates a pyramid.
- The lower part creates an inverted pyramid.
- Combining both forms the diamond pattern.
