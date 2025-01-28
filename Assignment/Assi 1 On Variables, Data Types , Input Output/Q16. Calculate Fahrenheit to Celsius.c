#include <stdio.h>
#include <conio.h>

int main() {

    float fah = 0.0;
    printf("Enter Temperature Fahrenheit: ");
    scanf("%f",&fah);


    printf("The Temperature Fahrenheit in Celsius is %f ",(fah-32)*(5.0/9.0));

    getch();
    return 0;
}
