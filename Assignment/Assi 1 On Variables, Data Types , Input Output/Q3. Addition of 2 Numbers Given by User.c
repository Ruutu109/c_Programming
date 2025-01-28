#include <stdio.h>
#include <conio.h>

int main()
{
    int num1=0, num2=0, add=0;

    printf("Enter 2 Numbers: \n");
    scanf("%d%d",&num1,&num2);

    printf("Addition of Given Numbers is %d + %d = %d",num1,num2,num1+num2);

    getch();
    return 0;
}
