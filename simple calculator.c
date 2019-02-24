#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,choice,c;
    printf("\nEnter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\nSum=%d",a+b);
        break;
    case 2:
        printf("\nmultiply=%d",a*b);
        break;
    case 3:
        printf("\nsubtraction=%d",a-b);
        break;
    case 4:
        c=a/b;
        printf("\ndivision=%d",c);
        break;
    default:
        printf("\nSORRY");



    }
    return 0;

}
