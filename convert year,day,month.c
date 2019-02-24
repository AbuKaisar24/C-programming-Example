#include<stdio.h>
int main()
{
    int n,y,m,d;
    printf("\nenter the value of n:");
    scanf("%d",&n);
    y=n/365;
    m=n%365/30;
    d=n%365%30;
    printf("\nY=%d\nM=%d\nD=%d",y,m,d);
    return 0;
}
