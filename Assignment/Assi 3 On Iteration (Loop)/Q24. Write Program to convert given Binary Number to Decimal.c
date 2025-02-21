#include<stdio.h>
#include<conio.h>

int main()
{
    long long binary;
    int decimal = 0, mul = 1, R=0;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0)
    {
        R = binary % 10;
        decimal = decimal + R * mul;
        binary = binary / 10;
        mul = mul * 2;
    }

    printf("%d\n", decimal);

    getch();
    return 0;
}
