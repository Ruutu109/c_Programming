#include<stdio.h>
#include<conio.h>

int main()
{
        int  n = 0;

        printf("Enter a Number :");
        scanf("%d",&n);

        if(  n == 0  )
        {
            printf("Number is Neutral");
        }

        ( n > 0 ) ?  printf("Number is Positive")  : printf("Number is Negative" ) ;

        getch();
        return 0;
}
