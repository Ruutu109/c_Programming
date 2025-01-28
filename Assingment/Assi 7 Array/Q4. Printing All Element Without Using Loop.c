#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7]={0};

    printf("Enter First Element: ");
    scanf("%d",&Arr[0]);
    printf("Enter Second Element: ");
    scanf("%d",&Arr[1]);
    printf("Enter Third Element: ");
    scanf("%d",&Arr[2]);
    printf("Enter Forth Element: ");
    scanf("%d",&Arr[3]);
    printf("Enter Fifth Element: ");
    scanf("%d",&Arr[4]);
    printf("Enter Sixth Element: ");
    scanf("%d",&Arr[5]);
    printf("Enter Seventh Element: ");
    scanf("%d",&Arr[6]);

    printf("\n First Element %d ",Arr[0]);
    printf("\n Second Element %d ",Arr[1]);
    printf("\n Third Element %d ",Arr[2]);
    printf("\n Forth Element %d ",Arr[3]);
    printf("\n Fifth Element %d ",Arr[4]);
    printf("\n Sixth Element %d ",Arr[5]);
    printf("\n Seventh Element %d ",Arr[6]);

    getch();
    return 0;
    }
