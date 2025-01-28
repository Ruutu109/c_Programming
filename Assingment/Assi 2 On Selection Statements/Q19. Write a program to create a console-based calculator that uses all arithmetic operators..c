#include<stdio.h>
#include<conio.h>

int main()
{
    char Oprt ='\0';
    int Num1 =0, Num2 = 0;

    printf("\n Enter a Operator for Mathematical Calculation :  \n\n");
    scanf(" %c",&Oprt);

    printf("\n Enter First Number  :  \n");
    scanf(" %d",&Num1);
    printf("\n Enter Second Number  :  \n");
    scanf(" %d",&Num2);


    switch(Oprt)
    {
        case '+' :

            printf("\n\nAddition of Given Numbers is : %d ",Num1+Num2);
            break;

        case '-':

            printf("\n\nSubstraction of Given Numbers is : %d ",Num1-Num2);
            break;

        case '*':

            printf("\n\nMultiplication of Given Numbers is : %d ",Num1*Num2);
            break;

        case '/':

            printf("\n\nDivision of Given Numbers is : %d ",Num1/Num2);
            break;

        case '%':

            printf("\n\nModule Division of Given Numbers is : %d ",Num1%Num2);
            break;

        default:

            printf("\n\nInvalid Arethmetic Operator");
            break;

    }



    getch();
    return 0;
}
