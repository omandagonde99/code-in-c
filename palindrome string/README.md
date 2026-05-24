# Check Palindrome String Logic

1. Take a string as input from the user.

2. Find the length of the string using a loop.

3. Create another string to store the reversed string.

4. Traverse the original string from the last character to the first character.

5. Store each character into the second string using:

   str2[j] = str1[i]

6. Add the null character `'\0'` at the end of the reversed string.

7. Compare the original string and reversed string character by character.

8. If any character is different:
   - the string is not a palindrome

9. If all characters are equal:
   - the string is a palindrome

# Example

Original String:
madam

Reversed String:
madam

Output:
String is palindrome

# Main Concept

- A palindrome string reads the same forward and backward.
- The original string is reversed and stored in another string.
- Both strings are compared to check whether they are equal.
