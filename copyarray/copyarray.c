#include<stdio.h>
int main(){
    int i,s1,s2,arr[100],arr2[100];
    printf("Enter the size of array :");
    scanf("%d",&s1);
    printf("Enter the number of array \n");
    for(i=0;i<s1;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<s1;i++){
        arr2[i]=arr[i];
    }
    
    printf("copy of the array is :\n");
    for(i=0;i<s1;i++){
            printf("%d ",arr2[i]);

    }

    return 0;

}
