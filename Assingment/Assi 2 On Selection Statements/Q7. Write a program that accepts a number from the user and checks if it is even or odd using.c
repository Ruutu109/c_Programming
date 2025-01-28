#include<stdio.h>
#include<conio.h>

int main()
{
    int Msd_Runs = 0;

    printf("Enter Dhoni''s Runs To Check the Runs are Even or Odd : \n\n\n");
    scanf("%d",&Msd_Runs);

    (Msd_Runs % 2 == 0) ? printf("%d  is Even",Msd_Runs) : printf("%d is Odd",Msd_Runs);

    getch();
    return 0;
}
