// Create a program that will ask the user to input a number, and calculate its seconds, minutes and hours.

#include<stdio.h>

int main() {

    int Num, second, minute, hour;

    printf("Input number:");
    scanf("%d", &Num);

    second=Num;
    minute=second/60;
    hour=minute/60;

    printf("Equivalent second is %d \n", second);
    printf("Minute is %d \n", minute);
    printf("Hour is %d \n", hour);

    return 0;

}