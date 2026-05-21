#include<stdio.h>
int main(){
    int i,j,s,sum=0;
    printf("Enter the size :");
    scanf("%d",&s);

    for(i=1; i<=s; i++){
        for(j=1; j<=i; j++){
         
            printf("%d ",j);
        }
        printf("\n");
    }
}
