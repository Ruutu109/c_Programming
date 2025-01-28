#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7] = {};
    int i=0,cnt=0;

    for(i=0;i<7;i++)
    {
        printf("Enter Element no. %d in Array : ",i+1);
        scanf("%d",&Arr[i]);
    }

    for(i=0;i<7;i++)
    {
        if(Arr[i] % 2 == 0 && Arr[i] !=0)
        {
            cnt++;
        }
    }

    if(cnt > 0)
    {
        printf("\n\nThe Count Of Even Numbers is %d ",cnt);
    }
    else
    {
        printf("\n\nThere is no Even Element Found.");
    }

    getch();
    return 0;
}
