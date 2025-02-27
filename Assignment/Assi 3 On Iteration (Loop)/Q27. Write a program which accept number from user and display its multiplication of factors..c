#include<stdio.h>
#include<stdio.h>

int main()
{
    int num = 0, i = 0,mul = 1;

    printf("Enter The Number : ");
    scanf("%d",&num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            mul *= i;
        }
    }

    printf("%d",mul);
    getch();
    return 0;
}
