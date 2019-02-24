#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter the 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("\n grater number is:%d",a);
    }
    else if(b>c&&b>a)
    {
        printf("\ngrater number is :%d",b);
    }
    else
        printf("\ngrater number is :%d ",c);

    return 0;
}
