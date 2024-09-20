#include<stdio.h>
#include<conio.h>

int main()
{
    int row=0;
    int col=0;
    int srt=0;
    int end=0;

    printf("Enter Start point :");
    scanf("%d",&srt);
    printf("Enter end point :");
    scanf("%d",&end);

    if(srt < end)
    {
        for ( row=1; row <= 10; row++ )
        {

            for(col =srt;col<=end;col++ )
            {
                printf("%5d",row*col);
            }
            printf("\n");
        }

    }
    else
    {
        for ( row=1; row <= 10; row++ )
        {

            for(col =srt;col>=end;col-- )
            {
                printf("%5d",row*col);
            }
            printf("\n");

        }
    }


    getch();
    return 0;
}
