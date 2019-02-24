#include<stdio.h>

int main()
{
    int a[5],i,sum=0;
    for(i=0;i<5;i++)
    {


    printf("\na=");
    scanf("%d",&a[i]);

    check(a[i]);
    }
    sum=a[0];
    for(i=0;i<5;i++)
    {
       sum=sum+a[i];
    }
    printf("\nsum=%d",sum);
    return 0;




}
int check(int a)

{

    if(a%2==0)
        printf("%d is even",a);
    else
        printf("%d is odd",a);
}
