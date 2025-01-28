#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7] = {};
    int i=0,min=0,max=0;

    for(i=0;i<7;i++)
    {
        printf("Enter Element no. %d in Array : ",i+1);
        scanf("%d",&Arr[i]);
    }

    Arr[0]= min=max;
    for(i=0;i<7;i++)
    {
        if(Arr[i] < min)
        {
            Arr[i]=min;
        }

        if(Arr[i] > max)
        {
            Arr[i]=max;
        }

    }

    printf("\n\nThe Minimum Number is %d ",min);
    printf("\n\nThe Maximum Number is %d ",max);

    getch();
    return 0;
}
