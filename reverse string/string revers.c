#include<stdio.h>
int main(){
    char str1[100];
    int i=0,lenght=0;
    printf("Enter the string :");
    scanf("%s",str1);

    while (str1[i] !='\0')
    {
       lenght++;
        i++;

    }

    for(i=lenght-1; i>=0;i--){
        printf("%c",str1[i]);

    }
    return 0;
}
