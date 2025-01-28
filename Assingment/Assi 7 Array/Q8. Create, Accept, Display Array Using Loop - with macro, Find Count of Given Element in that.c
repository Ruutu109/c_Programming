#include<stdio.h>
#include<conio.h>
#define no 7

int main()
{
    int Arr[no] = {};
    int i=0,srch=0,index=0,cnt=0;

    for(i=0;i<no;i++)
    {
        printf("Enter Element no. %d in Array",i+1);
        scanf("%d",&Arr[i]);
    }

    printf("Enter Element no. You want to search");
    scanf("%d",&srch);
    for(i=0;i<no;i++)
    {
        if(srch == Arr[i])
        {
            index==i;
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
