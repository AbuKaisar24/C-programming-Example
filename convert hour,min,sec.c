#include<stdio.h>
int main()
{
    int ts,h,m,s;

    printf("\nEnter total sec:");
    scanf("%d",&ts);
    h=ts/3600;
    m=ts%3600/60;
    s=ts%60;
    printf("\nH=%d\nM=%d\ns=%d",h,m,s);
    return 0;
}
