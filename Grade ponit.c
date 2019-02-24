#include<stdio.h>
int main()
{
    int mark;
    printf("\nEnter the mark:");
    scanf("%d",&mark);
    if(mark>100)
        printf("Not valid mark");
    else if(mark>=80)
        printf("A+");
    else if(mark>=75&&mark<=79)
        printf("A");
    else if(mark>=70&&mark<=74)
        printf("A-");
    else if(mark>=65&&mark<=69)
        printf("B+");
    else if(mark>=60&&mark<=64)
        printf("B");
    else if(mark>=55&&mark<=59)
        printf("B-");
    else if(mark>=50&&mark<=54)
        printf("C");
    else if(mark>=49&&mark<=45)
        printf("D");
    else
        printf("F");
    return 0;
}
