#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7] = {};
    int i=0,sum=0;

    for(i=0;i<7;i++)
    {
        printf("Enter Element no. %d in Array : ",i+1);
        scanf("%d",&Arr[i]);
    }

    for(i=0;i<7;i++)
    {
        sum = sum + Arr[i];
    }

    printf("\n\nThe Summetion Of All Numbers is %d ",sum);

    getch();
    return 0;
}
