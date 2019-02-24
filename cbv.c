#include<stdio.h>

int fact(int a)
{
    int f=1,i;
    for(i=1;i<=a;i++)
    {
        f=f*a;

    }
    printf("\n n!=%d",fact);

}
int main()
{
    int n,f;
    printf("\nEnter the number=");
    scanf("%d",&n);
    f=fact(n);
    printf("\nfactorial=%d",f);
    return 0;
}
