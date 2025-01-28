#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[7];
    int i=0;

    printf("Elements of the array: \n");
    for(i=0;i<7;i++)
    {
        printf("Element at index %d: %d\n", i,arr[i]);
    }

    getch();
    return 0;
}
