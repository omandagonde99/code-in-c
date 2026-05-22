#include<stdio.h>
int main(){
    int i,size,arr[100],largest;
    printf("Enter the size of array :");
    scanf("%d",&size);

    printf("Enter the number of array : \n");

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    // printf("sum of array element are :\n");
    largest = arr[0];
    for(i=0;i<size;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    printf("the largest element is %d",largest);
    printf("\n");
    
    return 0;
}
