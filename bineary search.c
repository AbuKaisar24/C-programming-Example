#include<stdio.h>
int main()
{
    int a[50],i,n,search,first,last,middle;
    printf("\nEnter the number of element:\n");
    scanf("%d",&n);
    printf("\nEnter the integer:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the  value to be search:\n");
    scanf("%d",&search);
    first =0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(a[middle]==search)
        {
            printf("\n%d found at location %d",search,middle+1);
            break;

        }
        else if(a[middle]<search)
            first=middle+1;
        else
            last=middle-1;
        middle=(first + last)/2;
    }
    if(first>last)
    {
        printf("\n%d is not present in array",search);

    }
    return 0;
}
