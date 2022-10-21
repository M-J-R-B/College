#include<stdio.h>

int main() {
    
    int income, excess;
    float tax;

    printf("Please input your monthly income:");
    scanf("%d", &income);

    if (income<=50000) {
        tax=income*0.10;
        printf("Your tax is %0.2f", tax);
    } else if (income>50000 && income<=100000) {
        excess=income-50000;
        tax=excess*0.15+5000;
        printf("Your tax is %0.2f", tax);
    } else if (income>100000 && income<=200000) {
        excess=income-200000;
        tax=excess*0.20+15000;
        printf("Your tax is %0.2f", tax);
    } else if (income>200000) {
        tax=income*0.25;
        printf("Your tax is %0.2f", tax);
    }
}
