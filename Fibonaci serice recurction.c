#include<stdio.h>
int fibonaci(int i)

{
   if(i==0)
        return 0;
   if(i==1)
    return 1;
   return fibonaci(i-1)+fibonaci(i-2);
}
int main()
{
    int i,n;
    printf("\nEnter the integer:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",fibonaci(i));

    }
    return 0;
}
