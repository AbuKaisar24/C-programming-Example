#include<stdio.h>

void check(int n)
{
    int i,flag=0;
    for(i=0;i<=n/2;i++)
    {
        if(n%2==0)
        {


            flag=1;
            break;
        }

    }
    if(flag==1)
        printf("\n%d is not a prim",n);
    else
        printf("\n%d is prim",n);
}
int main()
{
    int n;
    printf("\nEnter a integer:");
    scanf("%d",&n);

    check(n);
}
