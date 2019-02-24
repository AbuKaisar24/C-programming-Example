#include<stdio.h>
int main()
{
    int year;
    printf("\nEnter the year to be check: ");
    scanf("%d",&year);
    if(year%400==0||year%4==0)
        printf("\n%d is leap year",year);
    else if(year%100==0)
        printf("%d is not leap year",year);
        else
            printf("\n%d is not leap year",year);
    return 0;
}
