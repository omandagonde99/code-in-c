#include<stdio.h>
int main(){
    int i,s1,arr[100],pos;
    printf("Enter the size of arry :");
    scanf("%d",&s1);

    printf("Enter the number of array :\n");
    for(i = 0;i < s1;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the position of deleting array :");
    scanf("%d",&pos);
    
    for(i = pos-1 ;i < s1-1; i++){
        arr[i]=arr[i+1];
    }
    s1--;

    printf("After deleting element of array \n");
    for(i= 0; i< s1; i++){

        printf("%d ",arr[i]);
    
    }
    return 0;
}
