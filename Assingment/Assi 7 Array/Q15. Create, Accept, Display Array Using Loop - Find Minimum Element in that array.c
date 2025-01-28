#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7] = {};
    int i=0,min=0;

    for(i=0;i<7;i++)
    {
        printf("Enter Element no. %d in Array : ",i+1);
        scanf("%d",&Arr[i]);
    }

    Arr[0]= min;
    for(i=0;i<7;i++)
    {
        if(Arr[i] < min)
        {
            Arr[i]=min;
        }

    }

    printf("\n\nThe Minimum Number is %d ",min);

    getch();
    return 0;
}
