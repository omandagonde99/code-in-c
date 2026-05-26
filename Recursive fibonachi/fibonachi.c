#include <stdio.h>

void fibonachi(int a,int b,int n){
    int next ;

    if(n==0){
    return ;
    }
    next = a+b;
    printf("%d",next);

    fibonachi(b,next,n-1);

}

int main(){
    int n ;
    printf("Enter the number of terms :");
    scanf("%d",&n);
    
    printf("0 1");
    
    fibonachi(0,1,n-2);
    
    return 0;

}
