#include <stdio.h>
#include <conio.h>

int main() {

    float km = 0.0;
    printf("Enter Distance in  Kilometer: ");
    scanf("%f",&km);


    printf("The Distance of Kilometer in Meter is %fmeter ",km*1000);

    getch();
    return 0;
}
