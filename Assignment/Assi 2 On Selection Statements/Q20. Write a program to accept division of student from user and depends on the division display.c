#include<stdio.h>
#include<conio.h>

int main()
{
    char Dvsn ='\0';

    printf("\n Enter a Division for Exam :  \n\n");
    scanf(" %c",&Dvsn);


    if(Dvsn =='A' || Dvsn =='a' )
    {
        printf("\n\nYour Exam at 10 AM");
    }
    else if(Dvsn =='B' || Dvsn =='b' )
    {
        printf("\n\nYour Exam at 10.30 AM");
    }
    else if(Dvsn =='C' || Dvsn =='c' )
    {
        printf("\n\nYour Exam at 1 PM");
    }
    else if(Dvsn =='D' || Dvsn =='d' )
    {
        printf("\n\nYour Exam at 1.30 PM");
    }
    else
    {
        printf("\n\nInvalid Division");
    }

    getch();
    return 0;
}
