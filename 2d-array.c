#include<stdio.h>
int main()
{
    int i,j,n,m,a[5][5];
    //scanf("%d",&n);
    //scanf("%d",&m);
    for(i=0;i<5;i++)
        for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<5;i++)
    {
        for(j=0;j<2;j++)
        {

           printf("a[%d][%d]=%d\n",i,j,a[i][j]);
        }
    }
    return 0;
}
