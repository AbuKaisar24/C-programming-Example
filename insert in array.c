#include<stdio.h>
int main()
{
    int a[100],p,i,n,v;
    printf("\nEnter the element of array:\n");
    scanf("%d",&n);
    printf("\nEnter integers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the location where you wish to insert an element:\n");
    scanf("%d",&p);
    printf("Enter the value to be insert:\n");
    scanf("%d",&v);
    for(i=n-1;i>=p-1;i--)
        a[i+1]=a[i];

    a[p-1]=v;


    printf("Resultant array is:\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
