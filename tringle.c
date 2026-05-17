// #include <stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter the fist value a :");
//     scanf("%d",&a);
//     printf("Enter the second value b :");
//     scanf("%d",&b);
//     printf("Enter the third value c :");
//     scanf("%d",&c);

//     if(a+b>c && b+c>a && a+c>b){
//         printf("it is a triangle ");
//     }else{
//         printf("it is not triangle ");
//     }
// }

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three side of tringle :");
    scanf("\n%d %d %d",&a,&b,&c);

    if(a==b && b==c){
        printf("is Equelatrial tringle ");
    }else if(a==b || b==c || c==a){
        printf("it isIsosceles  tringle ");
    }else{
        printf("it is Scalene Triangle");
    }

    return 0;

}
