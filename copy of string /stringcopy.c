#include<stdio.h>
int main(){
   char str[100],str2[100];
   int i = 0;
    printf("Enter the charecter of string :");
    scanf("%s",&str);

    while(str[i] !='\0'){
        str2[i] = str[i];
        i++;
    }
    str2[i] ='\0';
    printf("copy   of string is %s",str2);

    return 0 ;
}
