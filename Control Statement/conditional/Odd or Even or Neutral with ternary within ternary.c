#include<stdio.h>
#include<conio.h>

int main()
{
    int Num;
    printf("Enter a Num :");
    scanf("%d",&Num);

    ( Num == 0 ) ?  printf("Number is Neutral") : ( ( Num % 2 == 0 ) ? printf("Number is EVEN") : printf("Given Number is ODD" ) );

    getch();
    return 0;
}
