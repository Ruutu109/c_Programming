#include<stdio.h>
#include<conio.h>

int main()
{
    int num1 = 0,num2 = 0;

    printf("Enter 2 Numbers To Check Which Number is Max : \n\n\n");
    scanf("%d",&num1);
    scanf("%d",&num2);

    if(num1 > num2)
    {
        printf(" Number 1 is Maximum");
    }
    else if(num2 > num1)
    {
        printf(" Number 2 is Maximum");
    }
    else
    {
        printf("Given Numbers is Equal");
    }

    getch();
    return 0;
}
