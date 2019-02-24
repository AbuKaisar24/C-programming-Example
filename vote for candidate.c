#include<stdio.h>
int main()
{
    int i,c1=0,c2=0,c3=0,c4=0,c5=0,count=0,countsp=0,v[10];

    for(i=0;i<6;i++)
    {
        printf("\nenter your vote for 5 candidates:");
        scanf("%d",&v[i]);
    }

    for(i=0;i<6;i++)
    {
        if(v[i]==1)
        {
            c1=c1+1;
        }
        else if(v[i]==2)
        {
            c2=c2+1;
        }
        else if(v[i]==3)
        {
            c3=c3+1;
        }
        else if(v[i]==4)
        {
            c4=c4+1;
        }
        else if(v[i]==5)
        {
            c5=c5+1;
        }
    }
    printf("\nc1=%d\nc2=%d\nc3=%d\nc4=%d\nc5=%d",c1,c2,c3,c4,c5);
    for(i=0;i<6;i++)
    {
        if(v[i]<=5)
        {
            count=count+1;

        }
        else
        {
            countsp=countsp+1;
        }
    }
        printf("\ncount=%d",count);
        printf("\ncount sp=%d",countsp);

    return 0;


}

