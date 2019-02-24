#include<stdio.h>
int main()
{
    int p,r,t,si;
    printf("\nEnter the principle,rate of interest,&time:\n");
    scanf("%d%d%d",&p,&r,&t);
    si=(p*r*t)/100;
    printf("\nSimple interest:%d",si);
    return 0;
}
