#include<stdio.h>
int main(){
    int i,size,arr[100],smallest;
    printf("Enter the size of array :");
    scanf("%d",&size);

    printf("Enter the number of array : \n");

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    // printf("sum of array element are :\n");
    smallest = arr[0];
    for(i=0;i<size;i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    printf("the smallest element is %d",smallest);
    printf("\n");
    
    return 0;
}
