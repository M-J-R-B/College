#include<stdio.h>

int main () {

    int num, digit;

    printf("Enter a number and I will print it backwards: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        printf("%d", digit);
        num = num / 10;
    }
    
    printf("\nHave a nice day!");
}