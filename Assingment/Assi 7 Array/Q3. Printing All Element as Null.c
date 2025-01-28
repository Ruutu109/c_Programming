#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7]={0};
    int i=0;

    printf("Printing All Element by Initialization ");

    for(i=0;i<7;i++)
    {
        printf("\n Element no. %d in Array : %d",i+1,Arr[i]);
    }


    getch();
    return 0;
}
