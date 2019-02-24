#include<stdio.h>
int isearch(int a[],int f, int l, int s)
{
    int m;
    while(f<=l)
    {
        m=f+(l-f)*(s-a[m])/(a[l]-a[f]);
        if(a[m]==s)
            return m;
        else if(a[m]<s)
            f=m+1;
        else
            l=m-1;
    }
    return -1;
}
int main()
{
    int a[50],i,n,f,l,s,p;
    printf("\nEnter the element  of array");
    scanf("%d",&n);
    printf("\nInputs %d numbers ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("\nInputs array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter the number to be search:");
    scanf("%d",&s);
    f=0;
    l=n-1;
    p=isearch(a,f,l,s);
    if(p==-1)
        printf("\n%d is not present ",s);
    else
        printf("\n%d id present at location%d",s,p+1);
    return -1;

}
