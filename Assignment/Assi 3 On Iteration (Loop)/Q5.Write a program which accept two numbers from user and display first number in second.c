#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0,i=0,cnt =0;

    printf("Enter a Number :\n");
    scanf("%d",&num);
    printf("Enter a Count :\n");
    scanf("%d",&cnt);

    for(i = 1; i <= cnt; i++)
    {
        printf("\n %d ",num);
    }
    getch();
    return 0;
}
