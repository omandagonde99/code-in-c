#include<stdio.h>

int main() {
    int n, reverse = 0, rem, original;

    printf("Enter number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if(original == reverse)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
