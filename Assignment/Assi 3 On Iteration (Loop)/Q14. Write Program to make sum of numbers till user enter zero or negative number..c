#include <stdio.h>
#include <conio.h>

int main() {
    int num, sum = 0;
    while (1)
    {
        printf("Enter a number : ");
        scanf("%d", &num);

        if (num > 0)
        {
            sum += num;
        }
        else
        {
            break;
        }
    }

    printf("Sum of entered numbers: %d\n", sum);

    getch();
    return 0;
}
