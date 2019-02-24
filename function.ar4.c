#include<stdio.h>

int check(int n)
{
    int i;
    for(i=0;i<=n/2;i++)
    {
        if(n%2==0)
        {
            flag=1;

        }
    }
    return 0;
}
int main()
{
    int n,flag=0;

    printf("\nEnter a integer :");
    scanf("%d",&n);
    flag=check(n);

    if(flag==1)
        printf("\n%d is not prime",n);
    else
        printf("\n%d is prime",n);
}

