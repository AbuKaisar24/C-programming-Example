#include<stdio.h>
int main()
{
    int a[100],i=0,ub;
    printf("\nEnter array size:");
    scanf("%d",&ub);
    printf("\nEnter the element in array");
    for(i=0;i<=ub;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nTraversing array is:");
    for(i=0;i<=ub;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}
