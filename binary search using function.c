 #include<stdio.h>
 int bsearch(int a[], int f,int l,int s)
 {
     int m;
     m=(f+l)/2;
     while(f<=l)
     {
         if(a[m]==s)
         {
             return m;
         }
         else if(a[m]<s)
            f=m+1;
         else
            l=m-1;
            m=(f+l)/2;
     }
     return -1;

 }
 int main()
 {
     int f,l,s,p,a[50],i,n;
     printf("\nEnter the element of arrey:");
     scanf("%d",&n);
     printf("\nInput%d integers",n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     printf("\nEnter the number to be search:");
     scanf("%d",&s);
     f=0;
     l=n-1;
     p=bsearch(a,f,l,s);
     if(p==-1)
        printf("\n%d is not present in array",s);
     else
        printf("%d is present at location %d",s,p+1);
     return -1;
 }
