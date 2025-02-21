#include <stdio.h>
#include <conio.h>

int main() {
    int i=0,j=0,str=0,end=0;
    printf("Enter Starting Point : ");
    scanf("%d",&str);
    printf("Enter Ending Point : ");
    scanf("%d",&end);

    for(i=1;i<=10;i++)
    {
        if(end<str)
        {
            for(j=str;j>=end;j--)
            {
                printf("%3d  ",i*j);
            }
        }
        else
        {
            for(j=str;j<=end;j++)
            {
                printf("%3d  ",i*j);
            }
        }

        printf("\n");
    }

    getch();
    return 0;
}
