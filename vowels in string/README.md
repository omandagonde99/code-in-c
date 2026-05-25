# Count Vowels in String Logic

1. Take a string as input from the user.

2. Declare a counter variable and initialize it to `0`.

3. Traverse the string character by character using a loop.

4. Continue the loop until the null character `'\0'` is reached.

5. For each character, check whether it is a vowel:
   - a, e, i, o, u
   - A, E, I, O, U

6. Use the OR operator `||` to check multiple vowel conditions.

7. If the character is a vowel:
   - increase the vowel counter using `count++`

8. After checking all characters, print the total number of vowels.

# Example

String:
Education

Vowels:
E u a i o

Total Vowels:
5

# Main Concept

- Strings are traversed character by character.
- Each character is checked against vowel conditions.
- The total count increases whenever a vowel is found.
