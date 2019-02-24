#include<stdio.h>
int main()
{
    int a[50],s,n,i,f,l,m;
    printf("Enter the element of array:\n");
    scanf("%d",&n);
    printf("\nEnter %d integers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be search:\n");
    scanf("%d",&s);
    f=0;
    l=n-1;
    while(f<=l)
    {
        m=(f+l)/2;
        if(a[m]==s)
        {
            printf("\n%d is  present at location %d",s,m+1);
            break;
        }
        else if(a[m]<s)
        f=m+1;
        else
            l=m-1;


    }
    if(f>l)
    {
        printf("\n%d is not present in array",s);
    }
    return 0;

}
