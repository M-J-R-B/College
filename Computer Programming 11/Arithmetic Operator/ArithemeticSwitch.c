#include<stdio.h>

int main()
{
    char operation;
    int total,num1,num2;

    printf("(a) Add\n");
    printf("(s) Subtract\n");
    printf("(m) Multiply\n");
    printf("(d) Divide\n");
    printf("\nChoose your operator:");
    scanf("%c", &operation);

    printf("\nEnter your first number:");
    scanf("%d", &num1);
    printf("\nEnter your second number:");
    scanf("%d", &num2);
    printf("--------------------------------------------------------\n");
    
    switch(operation)
    {
        case 'a':
            total = num1 + num2;
            printf("Your sum is %d", total);
            break;

        case 's':
            total = num1 - num2;
            printf("Your difference is %d", total);
            break;

        case 'm':
            total = num1 * num2;
            printf("Your product is %d", total);
            break;

        case 'd':
            total = num1 / num2;
            printf("Your quotient is %d", total);
            break;
    }
}