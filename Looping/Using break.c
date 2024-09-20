
#include <stdio.h>
#include <conio.h>

int main()
{
       int   i = 0;

        for(i = 1; i <= 5; i++)
        {
            printf("$ \n");
            if(i == 3)
            {
                break;
            }
        }

    getch();
    return 0;
}
