#include<stdio.h>
int main(){
    int arr1[100],arr2[100],merge[200];
    int i,s1,s2,k=0;
    printf("Enter the size of first array :");
    scanf("%d",&s1);
    printf("Enter the number of first array : \n");

    for(i=0;i<s1;i++){
        scanf("%d",&arr1[i]);
    }
     printf("Enter the size of first array :");
    scanf("%d",&s2);
    printf("Enter the number of first array : \n");

    for(i=0;i<s2;i++){
        scanf("%d",&arr2[i]);
    }

    for(i=0;i<s1;i++){
        merge[k]=arr1[i];
        k++;
    }

    for(i=0;i<s2;i++){
           merge[k]=arr2[i];
            k++;
    }

    printf("Merged array element arrey \n");
    for(i=0;i<k;i++){
        printf("%d ",merge[i]);
    }

    return 0;
}
