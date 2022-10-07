//Seconds to Hours: minutes: seconds

#include<stdio.h>

int main() {
    
    int Seconds, ss, hh, mm;

    printf("Input a number in Seconds:");
    scanf("%d",&Seconds);

    hh = Seconds/3600;
    mm = (Seconds-hh*3600)/60;
    ss = Seconds - hh*3600 - mm*60;

    printf("%d Seconds = %d hours : %d minutes : %d seconds", Seconds, hh, mm, ss);

    return 0;
}