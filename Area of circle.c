#include<stdio.h>
#define PI 3.1416
int main()

{
    int r;
    float area;
    printf("\nr=");
    scanf("%d",&r);
    area=PI*r*r;
    printf("\nArea of circle:%f",area);
    return 0;
}
