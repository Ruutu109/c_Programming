#include<stdio.h>
#include<conio.h>

int main()
{
        int  percent = 0;

        printf("Enter Percentage Numbers = ");
        scanf("%d",&percent);

        if(percent >= 40)
        {
            if(percent<=60)
            {
                printf("Grade C");
            }
            else if(percent>60 && percent<=80)
            {
                printf("Grade B");
            }
            else if(percent>80 && percent<100)
            {
                printf("Grade A");
            }
            else if(percent==100)
            {
                printf("Grade A+");
            }
            else
            {
                printf("Invalid Percentage");
            }
        }
        else
        {
            printf("Fail");
        }

        getch();
        return 0;
}
