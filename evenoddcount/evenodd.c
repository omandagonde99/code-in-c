#include<stdio.h>
int main(){
    int i,s1,s2,arr[100],even=0,odd=0;
    printf("Enter the size of array :");
    scanf("%d",&s1);
    printf("Enter the number of array \n");
    for(i=0;i<s1;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<s1;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("Even number is \n");
    printf("Even count = %d\n", even);

    
    printf("odd number is \n");
    printf("Odd count = %d\n", odd);
    
    
   return 0;
}
