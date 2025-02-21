#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr1[7]={7,77,777,7777,77777,777777,7777777};
    int Arr2[7]={234};
    int i=0;

    printf("Printing All Element by Initialization ");

    for(i=0;i<7;i++)
    {
        printf("\n Element no. %d in Array 1: %d",i+1,Arr1[i]);
    }

    printf("\n\n");
    for(i=0;i<7;i++)
    {
        printf("\n Element no. %d in Array 2: %d",i+1,Arr2[i]);
    }

    getch();
    return 0;
}
