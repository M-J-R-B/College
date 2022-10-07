#include <stdio.h>
int main(){

    int CokeBottles = 10;
    int BottleLiters = 2;
    int CokeBottleL = CokeBottles*BottleLiters;
        printf("The Total Liters of the Coke Bottles  %d", CokeBottleL);

    int CokeCans = 10;
    int CanOz = 12;
    int CokeCanOz = CokeCans*CanOz;
        printf("\nThe Total Oz of the Coke Can is %d", CokeCanOz);

    int ConvertCokeCanOz = CokeCanOz;
    double ToMl = 29.685;
    int CokeCanMl = CokeCanOz*ToMl;
        printf("\nThe Total mL of the Coke Can is %d", CokeCanMl);

    int ConvertCokeCanMl = CokeCanMl;
    double ToL = 0.001;
    int CokeCanL = ConvertCokeCanMl*ToL;
        printf("\nThe Total Liters of the Coke Cans is %d", CokeCanL);

    int TotalBottleCokeL = CokeBottleL;
    int TotalCanL = CokeCanL;
    int TotalSodaLiters = CokeBottleL+CokeCanL;
        printf("\nThe Total Liters of Soda in the Refrigerator is %d", TotalSodaLiters);

}

    