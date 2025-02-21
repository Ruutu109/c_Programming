#include<stdio.h>
#include<conio.h>

int main() {
    int Num, a = 0, b = 1, next;

    printf("Enter the Number: ");
    scanf("%d", &Num);


    while (a <= Num) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
