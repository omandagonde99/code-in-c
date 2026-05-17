// #include<stdio.h>
// int main (){
//     int start, end, i,flag=0,j;
//     printf("Enter the starting number :");
//     scanf("%d",&start);
//     printf("Enter the ending number :");
//     scanf("%d",&end);

//     for(i=start;i<=end;i++){
//         flag=0;
//         for(j=2;j<i;j++){
//             if(i%j==0){
//                 flag=1;
//                 break;
//             }
//         } 
//         if(flag==0 && i>1){
//         printf("%d\n",i); 
//     }
//     }
   
//     return 0;
// }
#include<stdio.h>
int main(){
    int start ,end,flag,i,j;
     printf("Enter the starting number :");
    scanf("%d",&start);
    printf("Enter the ending number :");
    scanf("%d",&end);

    for(i=start;i<=end;i++){
        flag=0;
        for(j=2;j<i;j++){
          if(i%j==0){
            flag=1;
          }
        }
        if(flag==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
