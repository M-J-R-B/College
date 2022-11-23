#include<stdio.h>

int main () {

    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    i=1;
    do {
        printf("%d", i);
        i++;

    } while (i<=n);
}