#include<stdio.h>

int main() 
{
    int n, row, col;

    printf("Enter a number between 1 and 9: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++) {
        for(col=1; col<=n+1-row; col++) {
            printf("*");
        }
        printf("\n");
    }
}