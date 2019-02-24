#include<stdio.h>
int main()
{
    int a,b,t;
    printf("\nEnter the value of a:");
    scanf("%d",&a);
    printf("\nEnter the value of b:");
    scanf("%d",&b);
    printf("\nBefore swapping:\n%d\n%d",a,b);
    t=a;
    a=b;
    b=t;
    printf("\nAfter swapping:\n%d\n%d",a,b);

    return 0;
}
