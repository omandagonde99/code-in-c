# Compare Two Strings Logic

1. Take two strings as input from the user.

2. Use a loop to compare both strings character by character.

3. Continue the loop until:
   - a different character is found, or
   - the null character `'\0'` is reached.

4. Compare characters using:

   str1[i] != str2[i]

5. If characters are different:
   - strings are not equal
   - stop the program

6. If characters are equal:
   - move to the next character using `i++`

7. After the loop ends, check whether both strings ended together:

   str1[i] == '\0' && str2[i] == '\0'

8. If both strings end at the same time:
   - strings are equal

9. Otherwise:
   - strings are not equal

# Example

String 1:
Hello

String 2:
Hello

Output:
Strings are equal

# Main Concept

- Strings are compared character by character.
- The null character `'\0'` marks the end of a string.
- If all characters match and both strings end together, the strings are equal.
