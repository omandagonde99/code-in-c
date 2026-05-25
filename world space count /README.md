# Count Words in String Logic

1. Take a string input from the user.

2. Declare a counter variable and initialize it to `1`.

3. Traverse the string character by character using a loop.

4. Continue the loop until the null character `'\0'` is reached.

5. Check whether the current character is a space:

   str[i] == ' '

6. If a space is found:
   - increase the word counter using `count++`

7. Move to the next character using `i++`

8. After the loop ends, print the total number of words.

# Example

String:
Hello World From C

Words:
Hello
World
From
C

Total Words:
4

# Main Concept

- Words in a string are separated by spaces.
- Counting spaces helps determine the total number of words.
- Total words = number of spaces + 1.
