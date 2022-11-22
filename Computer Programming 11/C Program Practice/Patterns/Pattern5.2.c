#include<stdio.h>

int main () 
{
    int n, row, col;

    printf("Enter a number between 1 and 9: ");
    scanf("%d", &n);

    for(row=1; row < n; row++) 
    {
        for(col=1; col<=row; col++)
        {
            printf("*");
        }      
            printf("\n"); 
    }
    
    for(row=n; row>=0; row--)
    {
        for(col=1; col<=row; col++) 
        {
            printf("*");
        }
            printf("\n");
    }
}