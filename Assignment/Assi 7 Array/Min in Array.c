#include <stdio.h>
#include <conio.h>

int main()
{
    int Bills[7], i =0, Min =0;

    for(i=0;i<7;i++)
    {
        printf("\n Enter Bill no %d = ",i+1);
        scanf("%d",&Bills[i]);


        if(Max > Bills[i] || i==0 )
        {
            Max = Bills[i];
        }

    }
    printf("\n Minimum Bill In The Given List is %d ",Min);

    getch();
    return 0;

}
