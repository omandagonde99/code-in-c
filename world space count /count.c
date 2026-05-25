#include<stdio.h>
int main(){
    char str[100];
    int i=0, count=1;

    printf("Enter the string :");
    scanf("%[^\n]",str);

    while (str[i] !='\0'){
        if(str[i]==' '){
            count++;
        }
        i++;
    }


    printf("%d",count);

    return 0;

}
