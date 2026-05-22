#include<stdio.h>
int main(){
    int i,size,arr[100];
    printf("Enter the size of array :");
    scanf("%d",&size);

    printf("Enter the number of array : \n");

    for(i=0;i<=size;i++){
        scanf("%d",&arr[i]);
    }

    printf("array element are :\n");

    for(i=0;i<=size;i++){
        
        printf("%d",arr[i]);

    }
    printf("\n");
    
    return 0;
}
