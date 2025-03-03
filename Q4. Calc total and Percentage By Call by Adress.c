#include<stdio.h>
#include<conio.h>

void Calc(int,int,int,int*,float*);
int main()
{
    int P=0,C=0,M=0,To=0;
    float Per=0;

    printf("Enter P");
    scanf("%d",&P);

    printf("Enter C");
    scanf("%d",&C);

    printf("Enter M");
    scanf("%d",&M);

    Calc(P,C,M,&To,&Per);

    printf("\n %d \n %2f \n",To,Per);

    getch();
    return 0;
}
void Calc(int S1,int S2,int S3,int *t,float *P)
{
    *t = S1 + S2 + S3;
    *P = ((float)(*t))/3;

    return;
}
