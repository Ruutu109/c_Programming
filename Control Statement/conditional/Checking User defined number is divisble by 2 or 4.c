#include <stdio.h>
#include <conio.h>

int main()
{
   int num ;

    printf("Enter a Number : ");
    scanf("%d",&num);

    if(num%2==0 && num%4==0)
    {
        printf("%d is divisible by both the Numbers",num);
    }
    else if(num%2==0 )
    {
        printf("%d is divisible by Number 2",num);
    }
    else if(num%4==0 )
    {
        printf("%d is divisible by Number 4",num);
    }
    else
    {
        printf("%d is not divisible by any Number ",num);
    }
    getch();
    return 0;
}
