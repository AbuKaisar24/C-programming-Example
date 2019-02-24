#include<stdio.h>
int binary(int a[], int n , int search , int first, int last)
{
    int mid,c=0;
    if(first<=last)
    {
        mid=(first+last)/2;
        if(search==a[mid])
        {
            c=1;
        }
        else if(search<a[mid])
        {

            return binary(a,n,search,first,mid-1);
        }
            else
                {
                    return binary(a,n,search,mid+1,last);
                }
    }
            else
                return c;
    }


int main()
{
    int a[50],i,n,search,first,last,c;
    printf("\nEnter the element of array:");
    scanf("%d",&n);
    printf("\nenter the integer numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("\nenter th number to be search:");
    scanf("%d",&search);
    first=0;
    last=n-1;
    c=binary(a,n,search,first,last);
    if(c==0)
    {
        printf("number is not founded");

    }
    else
        printf("\nNumber is founded");
    return 0;
}

