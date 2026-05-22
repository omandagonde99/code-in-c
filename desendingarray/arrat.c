#include<stdio.h>
int main(){
    int i,size,arr[100],temp,j;
    printf("Enter the size of array :");
    scanf("%d",&size);

    printf("Enter the number of array : \n");

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    // printf("sorting of array element are :\n");
    for(i=0;i<size;i++){
      for(j=i+1;j<size;j++){
        if(arr[i]<arr[j]){
            temp = arr[i];
            arr[i]= arr[j];
            arr[j] = temp;
        }
      }
    } 
  printf("sorted array elements are :\n");

  for(i= 0;i<size; i++){
    printf("%d ",arr[i]);
  }
    return 0;

}
   
