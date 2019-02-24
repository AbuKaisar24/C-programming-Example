#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],b[20],c[20],t,s,i,j=0,n,n1=0,start,end;
    printf("\nEnter the number of element:");
    scanf("%d",&n);
    printf("\nInputs %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the number to be search:");
    scanf("%d",&s);
    for(i=0;i<n;i=i+3)
    {
        b[n1]=a[i];
        c[n1]=i;
        n1++;
    }
    if(s<b[0])
        printf("Element not found");
    else
    {
        for(i=0;i<=n;i++)
        {
            if(s<b[i])
            {
                start=c[i-1];
                end=c[i];
                break;
            }
        }
        for(i=start;i<=end;i++)
        {
            if(s==a[i])
            j=1;
            break;
        }
    }
    if(j==1)
    {
        printf("Element is found at position %d",i);
    }
    else
        printf("\nElement is not found");

    return 0;
}
