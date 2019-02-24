#include<stdio.h>
#include<math.h>
int main()
{
    float r,pi=3.1416,volume;
    printf("\nEnter the radius:");
    scanf("%f",&r);
    volume=(4/3)*pi*pow(r,3);
    printf("\nVolume of sphere:%0.3f",volume);
    return 0;
}
