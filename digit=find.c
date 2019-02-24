#include<stdio.h>
#include<conio.h>

int main()
{
    int n,a,b,sum=0;
    printf("\nenter the five digit");
    scanf("%d",&b);
    a=b%10;
    n=b/10;
    sum=sum+a;
    a=n%10;
    n=n/10;
    sum=sum+a;
    a=n%10;
    n=n/10;
    sum=sum+a;
    a=n%10;
    b=n/10;
    sum=sum+a;
    a=n%10;
    n=n/10;
    sum=sum+a;
    printf("\nsum=%d\nb=%d",sum,b);

    return 0;

}
