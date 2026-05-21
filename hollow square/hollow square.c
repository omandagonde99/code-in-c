#include<stdio.h>
int main(){
    int i,j,s;
    printf("Enter the size :");
    scanf("%d",&s);

    for(i=1;i<=s;i++){
        // if(i==1||i==s){
        //     printf("*");
        // }else{
        //     printf(" ");
        // }
        for(j=1;j<=s;j++){
            // if(j==1||j==s){
            //     printf("*");
            // }else{
            //     printf(" ");
            // }
            if(i == 1 || i == s|| j == 1 || j == s){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
