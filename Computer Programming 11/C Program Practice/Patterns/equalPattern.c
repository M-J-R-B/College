#include<stdio.h>

int main (){
    int n, row, col;
    printf("Enter a number (only from 1-9): ");
    scanf("%d",&n);

    for(row=1; row<=n; row++ ) {
        for(col=1; col<=n; col++) {
            printf("*");
        }
        printf("\n");
    }
}