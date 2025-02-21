#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,num=0,sum=0;

    for(i=1;i<=10;i++)
    {
        printf("Enter 10 Numbers for Sum : ");
        scanf("%d",&num);

        sum+=num;
    }
    printf("\n The Addition of All Given Numbers is %d",sum);

    getch();
    return 0;
}
