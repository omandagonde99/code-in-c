#include<stdio.h>

int add(int a, int b)
    {
        int sum ;

        sum= a+b;

         return a+b;
    }
int main(){
    int num1, num2, result;

    printf("Enter the first number :");
    scanf("%d",&num1);

    printf("Enter the second number :");
    scanf("%d",&num2);

    result= add(num1,num2);

    printf(" sum = %d",result);

    return 0;
    
}
