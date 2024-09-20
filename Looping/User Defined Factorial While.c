#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0;
    int Fact=1;

    printf("Enter a Number :");
    scanf("%d",&n);
    int i = 1;
    for ( i=1; i <= n; i++ )
    {
        Fact=Fact*i;
    }
        printf("%d",Fact);

    getch();
    return 0;
}
