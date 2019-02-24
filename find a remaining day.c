#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter the value of a:");
    scanf("%d",&a);
    b=a/30;
    printf("\nMonth:%d",b);
    c=a%30;
    printf("\nRemaining day:%d",c);
    return 0;
}
