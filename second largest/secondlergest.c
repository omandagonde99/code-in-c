#include<stdio.h>
int main(){
    int i,s1,arr[100],largest,secondLargest;
    printf("Enter the size of array :");
    scanf("%d",&s1);
    printf("Enter the number of array \n");
    for(i=0;i<s1;i++){
        scanf("%d",&arr[i]);
    }

    largest = arr[0];
   secondLargest = arr[0];
   for(i=0;i<s1;i++){
    if(arr[i] > largest){
        secondLargest = largest;
        largest = arr[i];
    }else if(arr[i] > secondLargest && arr[i] != largest){
        secondLargest=arr[i];
    
     }
   }
    printf("Second largest element = %d", secondLargest); 

    return 0;

}    
