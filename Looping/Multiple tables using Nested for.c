#include<stdio.h>
#include<conio.h>

int main()
{
    int row=0;
    int col=0;

    for ( row=1; row <= 10; row++ )
    {

        for(col =7;col<=18;col++ )
        {
            printf("%5d",row*col);
        }
        printf("\n");

    }

    getch();
    return 0;
}
