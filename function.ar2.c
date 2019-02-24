#include<stdio.h>
int check()
{
    int n;
    printf("\nEnter a positive number:");
    scanf("%d",&n);

    return n;
}
int main()
{
    int n,i,flag=0;
    n=check();
    for(i=2;i<=n/2;i++)
    {
        if(n%2==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
        printf("\n%d is not prime",n);
    else
        printf("\n%d is prime",n);

    return 0;
}
