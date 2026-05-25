# Convert String to Uppercase Logic

1. Take a string as input from the user.

2. Traverse the string character by character using a loop.

3. Continue the loop until the null character `'\0'` is reached.

4. Check whether the current character is a lowercase letter using:

   str[i] >= 'a' && str[i] <= 'z'

5. If the character is lowercase:
   - subtract `32` from its ASCII value

6. Use the conversion logic:

   str[i] = str[i] - 32

7. Repeat the process for all characters in the string.

8. Print the updated uppercase string.

# Example

Original String:
hello

Uppercase String:
HELLO

# Main Concept

- Lowercase and uppercase letters have different ASCII values.
- The ASCII difference between lowercase and uppercase letters is `32`.
- Subtracting `32` converts lowercase letters into uppercase letters.
