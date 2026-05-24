# Find String Length Logic

1. Take a string as input from the user.

2. In C language, a string ends with a special character:

   '\0'

   called the null character.

3. Initialize a counter variable with value `0`.

4. Use a loop to traverse the string character by character.

5. Continue the loop until the null character is reached.

6. For every character:
   - increase the counter
   - move to the next character

7. After the loop ends, the counter value becomes the length of the string.

# Example

String:
Hello

Characters:
H e l l o

Length:
5

# Main Concept

- Strings are stored as character arrays.
- The null character `'\0'` represents the end of the string.
- Counting characters until `'\0'` gives the string length.
