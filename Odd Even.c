#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the integer number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\n%d is Even",n);
    }
    else
        printf("\n%d is Odd",n);
    return 0;
}
