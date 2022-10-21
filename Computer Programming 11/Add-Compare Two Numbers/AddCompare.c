#include <stdio.h>

int main() {
    
    int choice,num1,num2,sum;
    
    
    printf("(1) The sum of two numbers\n");
    printf("(2) Display which number is smaller\n");

    printf("Choose action: ");
    scanf("%d",&choice);
    
    printf("\nEnter the first number:");
    scanf("%d",&num1);
    printf("\nEnter the second number:");
    scanf("%d",&num2);
    
    switch(choice) {
        case 1: 
            sum = num1+num2;
        printf("The sum of two numbers is %d", sum);
        break;
    
        case 2:
            if (num1<num2) {
            printf("The smaller number is the first number which is %d", num1);
            } 
            else {
            printf("The smaller number is %d", num2); 
            } 
            break;
        default: 
            printf("ERROR");
    }
    
}
