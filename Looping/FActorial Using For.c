#include<stdio.h>
#include<conio.h>

int main()
{
    int n=9;
    int Fact=1;
    int i = 1;
    for ( i=1; i <= n; i++ )
    {
        Fact=Fact*i;
    }
        printf("%d",Fact);

    getch();
    return 0;
}
