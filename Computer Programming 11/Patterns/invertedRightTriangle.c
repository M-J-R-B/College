#include <stdio.h>
int main() {
    int n;
    
    printf("Please enter a number between 1 and 9: ");
    scanf("%d", &n);
    
    for(int row=1; row <= n; row++) {
        for(int col=1; col <=(n+1)-row ; col++) {
            printf("%d", col);
    }
     printf("\n");
    }
}