#include <stdio.h>
int main(){
    int a,i ;
    long long fact = 1;
    printf("Enter the number :");
    scanf("%d",&a);
      for(i=1;i<=a;i++){

      fact= fact*i;
        // printf("%d\n",i);
    }
    printf("factorial=%lld",fact);

    return 0;

}