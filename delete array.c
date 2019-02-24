#include<stdio.h>
int main()
{
    int a[100],p,i,n;
    printf("Enter the element of array:\n");
    scanf("%d",&n);
    printf("\nEnter %d element:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the location to be deleted:\n");
    scanf("%d",&p);
    while(p<n)
    {
        a[p-1]=a[p];
        p++;
    }
    n--;
    printf("After deleting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
