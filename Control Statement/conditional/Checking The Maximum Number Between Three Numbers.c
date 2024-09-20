#include<stdio.h>
#include<conio.h>

int main()
{
        int  num1 = 0,  num2 = 0, num3 = 0;

        printf("Enter 3 Numbers = ");
        scanf("%d%d%d",&num1, &num2,&num3);

        if((num1 == num2) && (num1 == num3))
        {
                    printf("Numbers are Equal");
        }
        else if((num1 >= num2) && (num1 >= num3))
        {
                   printf("%d is Max", num1);
        }
        else if((num2 >= num1) && (num2 >= num3))
        {
                    printf("%d is Max", num2);
        }
        else
        {
                    printf("%d is Max", num3);
        }


        getch();
        return  0;
}
