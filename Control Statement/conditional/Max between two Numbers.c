#include<stdio.h>
#include<conio.h>

int main()
{
            int  n = 0,m=0;

            printf("Enter First Number = ");
            scanf("%d",&n);
            printf("Enter Second Number = ");
            scanf("%d",&m);


            if( n == m )
            {
                        printf("Same Numbers ");
            }
            else if( n > m )
            {
                        printf("First Number is Max");
            }
            else
            {
                        printf("Second Number is Max");
            }

            getch();
            return 0;
}
