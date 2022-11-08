// Baselisco, Mary Jhoy R. 
// A program that will display the odd and even numbers
#include <stdio.h>
int main() {
    
    int usernum;
    int count = 1;
    
    printf("Enter a number: ");
    scanf("%d", &usernum);
printf("---------------------------------------------------------------\n");
printf("Even numbers:\n");
    while(count<=usernum) {
        if(count % 2 == 0) {
            printf("%d \n", count);
            
        } 
        count++;
        }
printf("---------------------------------------------------------------\n");
printf("Odd numbers:\n");
    count=1;
    while(count<=usernum) {
        if(count % 2 == 1) {
            printf("%d \n", count);
            
        } 
        count++;
        }
        
}
    

   
