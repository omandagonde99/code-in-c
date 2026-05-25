# Convert String to Lowercase Logic

1. Take a string as input from the user.

2. Traverse the string character by character using a loop.

3. Continue the loop until the null character `'\0'` is reached.

4. Check whether the current character is an uppercase letter using:

   str[i] >= 'A' && str[i] <= 'Z'

5. If the character is uppercase:
   - add `32` to its ASCII value

6. Use the conversion logic:

   str[i] = str[i] + 32

7. Repeat the process for all characters in the string.

8. Print the updated lowercase string.

# Example

Original String:
HELLO

Lowercase String:
hello

# Main Concept

- Uppercase and lowercase letters have different ASCII values.
- The ASCII difference between uppercase and lowercase letters is `32`.
- Adding `32` converts uppercase letters into lowercase letters.
