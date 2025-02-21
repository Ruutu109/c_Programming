#include<stdio.h>
#include<conio.h>

int main()
{
    int Msd[7]={7,77,777,7777,77777,777777,7777777};
    int i=0,srch_no =0,cnt=0;

    printf("Enter An Element For Search : ");
    scanf("%d",&srch_no);

    for(i=0;i<7;i++)
    {
        if(srch_no == Msd[i])
        {
            cnt++;
            break;
        }
    }

    if(cnt>0)
    {
        printf("Given Element is on %d no. of Location",i+1);
    }
    else
    {
        printf("Given Element is not found");
    }
    getch();
    return 0;

}
