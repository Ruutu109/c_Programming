#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7] = {};
    int i=0,evn=0,odd=0,zr=0;

    for(i=0;i<7;i++)
    {
        printf("Enter Element no. %d in Array : ",i+1);
        scanf("%d",&Arr[i]);
    }

    for(i=0;i<7;i++)
    {
        if(Arr[i]  == 0)
        {
            zr++;
        }
        else if(Arr[i] % 2  == 0)
        {
            evn++;
        }
        else
        {
            odd++;
        }
    }

    printf("\n\nThe Count Of Null/Zero Numbers is %d ",zr);
    printf("\n\nThe Count Of Even Numbers is %d ",evn);
    printf("\n\nThe Count Of Odd Numbers is %d \n\n\n",odd);


    getch();
    return 0;
}
