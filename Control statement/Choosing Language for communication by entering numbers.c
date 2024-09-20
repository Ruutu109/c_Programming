#include <stdio.h>
#include <conio.h>

int main()
{
   int num ;

    printf("Enter a Number : ");
    scanf("%d",&num);

    if(num==0)
    {
        printf("Marathi");
    }
    else if(num==1)
    {
        printf("Hindi");
    }
    else if(num==2)
    {
        printf("Sanskit");
    }
    else if(num==3)
    {
        printf("Gujrati");
    }
    else
    {
        printf("Invalid Number");
    }

    getch();
    return 0;
}
