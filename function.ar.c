#include<stdio.h>
void check()
{
    int n,i,flag=0;
    printf("\nEnter a integer number:");
    scanf("%d",&n);
    for(i=0;i<=n/2;i++)
    {
        if(n%2==0)
        {
            flag=1;
        }
    }
    if(flag==1)
        printf("\n%d is not prime",n);
    else
        printf("\n%d is prime",n);
}

int main()
{
    check();

    return 0;
}
