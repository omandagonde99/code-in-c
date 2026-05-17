#include<stdio.h>
int main(){
    long long  num , revers=0, rem ,temp;
    printf("Enetr the number :");
    scanf("%lld",&num);
    
    temp = num;
    while(num !=0){
        rem=num%10;
        
        revers=revers*10+rem;

        num=num/10;

    }
    printf("revers=%lld\n",revers);

    if(temp == revers){
    printf("it is the palindrome number = %lld", revers);
    }else{
        printf("itis not palindrome number");
    }
    return 0;
}