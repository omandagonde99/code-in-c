#include<stdio.h>
int main(){
    char str1[100],str2[100];
    int i=0;
     
    printf("Enter the first string :");
    scanf("%s",&str1);

    printf("Enter the second string :");
    scanf("%s",&str2);

    while(str1[i] != '\0' && str2[i] !='\0')
    {
        if(str1[i] != str2[i]){
            printf("string are not equal ");
            return 0;
        }
        i++;
    }
    if(str1[i]=='\0' && str2[i]=='\0'){
        printf("string are equal ");
    }else{
                printf("string are not equal ");

    }
    return 0;
}
