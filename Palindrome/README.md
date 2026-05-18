Palindrome Logic (in English):

Take a number
Example: 121
Create the reverse of the number
Get the last digit using % 10
Add it to the reverse number
Remove the last digit from the original number using / 10
Compare:
If original number == reverse number
→ Palindrome ✅
Otherwise
→ Not a palindrome ❌

Main reverse logic:

reverse = reverse * 10 + (n % 10);

Meaning:

n % 10 → gets the last digit
reverse * 10 → shifts digits left
+ (n % 10) → adds the new digit

Example for 123:

0 * 10 + 3 = 3
3 * 10 + 2 = 32
32 * 10 + 1 = 321

So reverse of 123 is 321.
