#include<stdio.h>
int main(){
    char str1[100],str2[100];
    int i=0,lenght=0,j=0;
    printf("Enter the string :");
    scanf("%s",str1);

    while (str1[i] !='\0')
    {
       lenght++;
        i++;

    }

    for(i=lenght-1; i>=0;i--){
    //   printf("%c",str1[i]);
        str2[j]=str1[i];
        j++;
    }
    str2[j]='\0';

    i = 0;

    while(str1[i] != '\0' && str2[i] != '\0'){

        if(str1[i] != str2[i]){

            printf("String is not palindrome");
            return 0;
        }

        i++;
    }

    printf("String is palindrome");

  
    return 0;
}
