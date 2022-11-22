#include<stdio.h>

int main () {
    int n, sum=0;

    while(n>0) {

    printf("Enter a number: ");
                scanf("%d",&n);
                      sum += n;
    
    } 
        printf("You entered a negative number or 0 .\n");
        printf("The total of the numbers you entered is %d", sum);
    }


