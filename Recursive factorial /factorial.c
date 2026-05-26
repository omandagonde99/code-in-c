#include<stdio.h>

int fac = 1;

void factorial(int n){

    if(n==0||n==1){
        printf("factorial is = %d",fac);
        return ;
    }

    fac = fac*n ;
    factorial(n-1);
}

int main(){
    int n ;
    printf("Enter the number :");
    scanf("%d",&n);
    
    factorial(n);

    return 0;


}
