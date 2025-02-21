#include <stdio.h>
#include <conio.h>

int main() {
    int i=0,num=0;
    printf("Enter a number : ");
    scanf("%d", &num);

    for(i=10;i>=1;i--)
    {
        printf("%d\n", num*i);
    }

    getch();
    return 0;
}
