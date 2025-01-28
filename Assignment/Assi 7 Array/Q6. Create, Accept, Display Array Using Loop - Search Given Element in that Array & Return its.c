
#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7]={0};
    int i=0,Srch=0,index=0,cnt=0;

    for(i=0;i<7;i++)
    {
        printf("\n Enter Element No. %d : ",i+1);
        scanf("%d",&Arr[i]);
    }

    for(i=0;i<7;i++)
    {
        printf("\n\nElement No. %d  is %d ",i+1,Arr[i]);
    }

    printf("\n Enter an Element No. you want to search : ");
    scanf("%d",&Srch);

    for(i=0;i<7;i++)
    {
        if(Srch == Arr[i])
        {
            index=i;
            cnt++;
            break;
        }
    }

    if(cnt > 0)
    {
        printf("\n\nThe Index Of Given No. is %d ",i);
    }
    else
    {
        printf("\n\nThe Index Of Given No. is not Found.");
    }




    getch();
    return 0;
}
