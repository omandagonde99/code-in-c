# Concatenate Two Strings Logic

1. Take two strings as input from the user.

2. Find the end of the first string using a loop.

3. Continue traversing until the null character `'\0'` is reached.

4. Start copying characters of the second string at the end position of the first string.

5. Copy characters using:

   str1[i] = str2[j]

6. Increase both indexes after each copy:
   - `i++` moves to the next position in the first string
   - `j++` moves to the next character of the second string

7. Continue copying until the null character of the second string is reached.

8. Add the null character at the end of the concatenated string.

9. Print the final concatenated string.

# Example

First String:
Hello

Second String:
World

Concatenated String:
HelloWorld

# Main Concept

- Concatenation means joining two strings.
- The second string is added at the end of the first string.
- Characters are copied one by one until the null character is reached.
