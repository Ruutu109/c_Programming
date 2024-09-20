#include<stdio.h>
#include<conio.h>

int main()
{
    int row=0;
    int col=0,col2=0;
    int n=5;

    for ( row=1; row <= n; row++ )
    {

        for(col =1;col<=n;col++ )
        {
            if(row==1 || row == n || col == 1 || col == n)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }

        }
        printf("\n");

    }

    getch();
    return 0;
}
