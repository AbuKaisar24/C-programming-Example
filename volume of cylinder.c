#include<stdio.h>
int main()
{
    float volume,pi=3.14,r,h;
    printf("\nEnter the volume of radious:");
    scanf("%f",&r);
    printf("\nenter the value of hight:");
    scanf("%f",&h);
    volume=pi*r*r*h;
    printf("\nvolume of cylinder:%0.3f",volume);
    return 0;
}
