#include<stdio.h>
#include<conio.h>

void Swap_Num(int *X, int *Y, int *Z)
{
    int Temp = 0;

    Temp = *Z;
    *Z = *Y;
    *Y = *X;
    *X = Temp;

    return;
}

int main()
{
    int N1 = 0, N2 = 0, N3;

    printf("Enter Three Numbers to Swap : ");
    scanf("%d",&N1);
    scanf("%d",&N2);
    scanf("%d",&N3);


    printf(" Before Swap N1 = %d \n N2 = %d \n N3 = %d \n\n\n",N1,N2,N3);

    Swap_Num(&N1,&N2,&N3);

    printf("After Swapping Numbers N1 = %d \n N2 = %d \n N3 = %d \n",N1,N2,N3);

    getch();
    return 0;
}
