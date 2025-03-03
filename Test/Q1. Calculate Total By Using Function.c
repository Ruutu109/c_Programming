#include<stdio.h>
#include<conio.h>

int Calculate_Total(int, int, int);

int main()
{
    int Physics = 0, Chemistry = 0, Maths = 0, Total = 0;

    printf("Enter Physics Marks: ");
    scanf("%d", &Physics);
    printf("Enter Chemistry Marks: ");
    scanf("%d", &Chemistry);
    printf("Enter Maths Marks: ");
    scanf("%d", &Maths);

    printf("Marks of Physics: %d\nMarks of Chemistry: %d\nMarks of Maths: %d\n", Physics, Chemistry, Maths);

    Total = Calculate_Total(Physics, Chemistry, Maths);

    printf("Total of All Subjects Marks: %d\n", Total);

    getch();
    return 0;
}

int Calculate_Total(int Phy, int Chem, int Mat)
{
    return Phy + Chem + Mat;
}
