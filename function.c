#include<stdio.h>
int sum(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
int max(int a,int b,int c)
{

    if(a>b&&a>c)
        return a;
    else if(b>c&&b>a)
        return b;
        else
        return c;


}
int min(int a,int b,int c)
{
    if(a<b&&b>c)
        return a;
    else if(a>b&&a>c)
        return b;
    else
        return c;
}
int main()
{
    int a,b,c,m,s,mi;
    printf("\nenter the first number:");
    scanf("%d",&a);
    printf("\nenter the second number:");
    scanf("%d",&b);
    printf("\nEnter the three number:");
    scanf("%d",&c);
    m=max(a,b,c);
    mi=min(a,b,c);

    printf("maximum=%d",m);
    printf("minimum=%d",mi);
    s=sum(a,b);
    printf("sum=%d",s);

}
