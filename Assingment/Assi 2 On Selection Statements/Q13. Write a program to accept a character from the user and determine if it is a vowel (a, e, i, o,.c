#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("Enter a Character To Check Given Character is Vowel, Consonant or Other : \n\n");
    scanf("%c",&ch);

    if ((ch =='a') || (ch =='e') || (ch =='i') || (ch =='o') ||(ch =='u') || (ch =='A') || (ch =='E') || (ch =='I') || (ch =='O') ||(ch =='U'))
    {
        printf("\n\n %c is a Vowel Character", ch);
    }
    else if( (ch > 'a' && ch <= 'z') || (ch > 'A' && ch <= 'Z') )
    {
        printf("\n\n %c is a Consonant Character", ch);
    }
    else
    {
        printf("\n\n % is Other Symbol or Number", ch);
    }

    getch();
    return 0;
}
