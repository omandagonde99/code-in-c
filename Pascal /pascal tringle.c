#include<stdio.h>

int main(){

    int i, j, n, value;

    printf("Enter number of rows : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){

        value = 1;

        for(j = 0; j <= i; j++){

            printf("%d ", value);

            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
