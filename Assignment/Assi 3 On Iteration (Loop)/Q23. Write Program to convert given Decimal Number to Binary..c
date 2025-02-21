#include <stdio.h>

int main()
{
    int num, binary[32], i = 0,j=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");

    getch();
    return 0;
}
