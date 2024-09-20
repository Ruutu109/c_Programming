#include<stdio.h>
#include<conio.h>

int main()
{
            int  Num = 0;

            printf("Enter a Number = ");
            scanf("%d",&Num);


            if( Num == 0 )
            {
                        printf("Given Number is Neutral");
            }
            else if( Num % 2 == 0 )
            {
                        printf("Given Number is Even");
            }
            else
            {
                        printf("Given Number is Odd");
            }

            getch();
            return 0;
}
