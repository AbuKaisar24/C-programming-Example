#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,sum,total=500;
    printf("\nenter the mark of 3 subject:");
    scanf("%f%f%f",&a,&b,&c);
    sum=a+b+c;
    printf("Percentage:%f",sum*100/total);

}
