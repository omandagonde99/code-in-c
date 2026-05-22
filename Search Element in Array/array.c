#include<stdio.h>
int main(){
    int i,size,arr[100],search,flag;
    printf("Enter the size of array :");
    scanf("%d",&size);

    printf("Enter the search number :");
    scanf("%d",&search);

    printf("Enter the number of array : \n");

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("search of array element are :\n");
    for(i=0;i<size;i++){
        if(arr[i]==search){
            flag = 1;
            break ; 
        //     printf("Element are founrd");
        // }else{
        //     printf("element not fount ");
        }
    }
   if(flag==1){
    printf("Element are found");
   }else{
    printf("Element not found");
   }
    return 0;

}
   
