#include <stdio.h>
int main() {
  int count = 0;
  int largestNumber = 0;
  int num[10];

  	printf("Enter 10 Random Integers");
  	printf("\n---------------------------------------");

 	 for (int i = 0; i < 10; i++) {
    		printf("\nEnter #%d: ", i+1);
    			scanf("%d", &num[i]);
 	 }

  	for (int i = 0; i < 10; i++) {
    		if (largestNumber < num[i]) {
      			num[i] = largestNumber;
   	 	}
  	}

  	for (int i = 1; i <= 10; i++) {
      		if (num[1] == largestNumber) {
        			count++;
		}
  	}
    		printf("The Largest Value is %d. \nIt was entered %d time/s.", num[1], count--);
}
