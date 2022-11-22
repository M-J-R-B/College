#include <stdio.h>
int main() {
    int limit;
    
    printf("Please enter a number between 1 and 9: ");
    scanf("%d", &limit);
    
    for(int line=1; line <= limit; line++) 
    {
        for(int tabs=1; tabs <= line ; tabs++) {
            printf("%d", tabs);
    }
     printf("\n");
    }
}