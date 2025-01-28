#include <stdio.h>
#include <conio.h>

int main()
{
    char name[60] ="";
    int Roll_no=0;
    char course[25]="";
    char city[10]="";

    printf("Enter Student Name : ");
    scanf("%s",name );
    printf("Enter Roll Number : ");
    scanf("%d",&Roll_no);
    printf("Enter Course Name: ");
    scanf("%s",course);
    printf("Enter City Name : ");
    scanf("%s",city);

    printf("Student Name: %s \n", name);
    printf("Roll No.: %d \n", Roll_no);
    printf("course: %s \n", course);
    printf("City: %s \n", city);

    getch();
    return 0;
}
