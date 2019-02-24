#include<stdio.h>
int main()
{
    int  n,sum=0,r;
    printf("\nEnter a integer:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;

    }
    printf("n=%d",r);
    printf("Sum=%d",sum);
    return 0;
}
