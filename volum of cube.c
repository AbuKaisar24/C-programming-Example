#include<stdio.h>
int main()
{
    float a,area,volume;//surface area
    printf("\nEnter the any size of a cube:\n");
    scanf("%f",&a);
    area=6*(a*a);
    volume=a*a*a;
    printf("\nSurface area of cube is:%0.3f",area);
    printf("\nVolume of a cube is :%0.3f ",volume);

    return 0;
}
