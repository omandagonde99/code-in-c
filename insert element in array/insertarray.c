#include<stdio.h>
int main(){
    int i,s1,arr[100],pos,element;
    printf("Enter the size of arry :");
    scanf("%d",&s1);

    printf("Enter the number of array :\n");
    for(i = 0;i < s1;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the position of incerting array element :");
    scanf("%d",&pos);
    
    printf("Enter the value of incerting array element :");
    scanf("%d",&element);

    for(i =s1;i>=pos; i--){
        arr[i]=arr[i-1];

    }
    arr[pos - 1] = element;

    s1++;

    printf("After inserting element in array \n");
    for(i= 0; i< s1; i++){

        printf("%d ",arr[i]);
    
    }
    return 0;
}
