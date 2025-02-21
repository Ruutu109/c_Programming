#include<stdio.h>
#include<conio.h>

int main()
{
    int x=0, y=0,i=0,R=1;
    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    for(i = 1; i <= y; i++)
    {
        R *= x;
    }

    printf("%d \n",R);

    getch();
    return 0;
}
