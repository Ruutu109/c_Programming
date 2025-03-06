#include<stdio.h>
#include<conio.h>

int main()
{
    int Row = 0, Col = 0,i = 0, j = 0;

    printf("Enter Number : ");
    scanf("%d",&Row);

    printf("Enter Number : ");
    scanf("%d",&Col);

    for(i = 1 ; i <= Row; i++)
     {
        for(j = 1; j <= Col; j++)
        {
            printf(" %d ",i);
        }
        printf("\n");
    }

    getch();
    return 0;
}
