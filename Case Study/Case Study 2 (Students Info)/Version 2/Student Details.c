#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Stud
{
    int Roll_No;
    char Name[30];
    int Phys;
    int Chem;
    int Bio;
    int Total;
    float Percent;
};

int main()
{
    struct Stud std;

    printf("Enter Roll Number : ");
    scanf("%d",&std.Roll_No);
    printf("Enter Name : ");
    scanf("%d",&std.Name);
    fflush(stdin);

    printf("Enter Marks of Physics : ");
    scanf("%d",&std.Phys);
    printf("Enter Marks of Chemistry : ");
    scanf("%d",&std.Chem);
    printf("Enter Marks of Biology : ");
    scanf("%d",&std.Bio);

    std.Total = std.Phys + std.Chem + std.Bio;
    std.Percent = ((float)std.Total / 300) * 100;

    printf("**************************************************");
    printf("\n\nRoll Number : %d \n", std.Roll_No);
    printf("Name : %s \n", std.Name);
    printf("Marks of Physics : %d \n", std.Phys);
    printf("Marks of Chemistry : %d \n", std.Chem);
    printf("Marks of Biology : %d \n", std.Bio);
    printf("Total Marks : %d \n", std.Total);
    printf("Percentage : %0.2f \n\n", std.Percent);
    printf("**************************************************");

    getch();
    return 0;
}

