#include<stdio.h>
#include<conio.h>

int main()
{
                int  num = 0;

                printf("Enter a Number : ");
                scanf("%d",&num);

                if( num > 0 )
                {
                            printf("Positive Number");
                }
                else
                {
                            printf("Negative Number");
                }

                getch();
                return  0;
}
