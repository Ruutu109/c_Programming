#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,num=0,max=0;

    for(i=1;i<=7;i++)
    {
        printf("Enter 7 Numbers for Finding max : ");
        scanf("%d",&num);
        if(num >= max)
        {
            max = num;
        }
    }


    printf("\n The Maximum in Given Numbers is %d",max);

    getch();
    return 0;
}
