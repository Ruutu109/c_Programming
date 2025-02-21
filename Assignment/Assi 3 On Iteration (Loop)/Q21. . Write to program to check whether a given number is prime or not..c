#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0,i=0,Cnt=0;
    printf("Enter value of x: ");
    scanf("%d", &Num);

    for(i = 1; i <= Num; i++)
    {
        if(Num % i == 0)
        {
            Cnt++;
        }
    }
    if(Cnt == 2)
    {
        printf("%d is Prime Number\n",Num);
    }
    else
    {
        printf("%d is not Prime Number\n",Num);
    }


    getch();
    return 0;
}
