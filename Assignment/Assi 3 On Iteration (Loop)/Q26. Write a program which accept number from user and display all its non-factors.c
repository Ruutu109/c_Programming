#include<stdio.h>
#include<stdio.h>

int main()
{
    int num = 0, i = 0;

    printf("Enter The Number : ");
    scanf("%d",&num);

    for (i = num; i >= 1; i--)
    {
        if (num % i != 0)
        {
            printf("%d \n", i);
        }
    }

    getch();
    return 0;
}
