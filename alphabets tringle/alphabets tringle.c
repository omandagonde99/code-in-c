#include<stdio.h>
int main(){
    int i,j,s;
    printf("Enter the size :");
    scanf("%d",&s);

    for(i=1; i<=s; i++){
        for(j=0; j<=i; j++){
         
            printf("%c",'A'+j);
        }
        printf("\n");
    }
}
