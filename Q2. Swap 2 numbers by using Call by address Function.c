#include<stdio.h>
#include<conio.h>

void Swap_Num(int *X, int *Y)
{
    int Temp = 0;

    Temp = *X;
    *X = *Y;
    *Y = Temp;

    return;
}

int main()
{
    int N1 = 0, N2 = 0;

    printf("Enter Two Numbers to Swap : ");
    scanf("%d",&N1);
    scanf("%d",&N2);

    printf(" Before Swap N1 = %d \n N2 = %d \n ",N1,N2);

    Swap_Num(&N1,&N2);

    printf("After Swapping Numbers N1 = %d \n N2 = %d \n",N1,N2);

    getch();
    return 0;
}
