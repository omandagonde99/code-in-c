// #include<stdio.h>
// #include<math.h>
// int main(){
//     int num, temp,count=0,rem,sum=0;
//     printf("Enter number: ");
//     scanf("%d",&num);

//     temp = num;
//     while(temp !=0){
//         count++;
//         temp = temp/10;
//     }

//     printf("%d number of digits\n",count);

//     temp = num;

//     while(temp !=0){
//         rem = temp%10;
//         sum = sum + (int)pow(rem,count);

//         temp=temp/10;
//     }

//     if(sum == num){
//         printf("%d it is a Armstrong number ",num);

//     }else{
//         printf("%d it is not Armstrong number ",num) ;
//     }
//     return 0;
// }
#include<stdio.h>

int main(){

    int num, temp, rem, sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0){

        rem = temp % 10;

        sum = sum + rem * rem * rem;

        temp = temp / 10;
    }

    if(sum == num){

        printf("%d is Armstrong number", num);
    }
    else{

        printf("%d is not Armstrong number", num);
    }

    return 0;
}