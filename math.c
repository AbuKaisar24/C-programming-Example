#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,a,b,ln=log;
    printf("\nx=");
    scanf("%d",&x);
    a=sqrt(pow(sin(cos(ln(x,5))),2))- exp(5*pow(x,2));
    b=pow(x,2)-ln(cos(pow(x,5)));
    y=a/b;
    printf("\ny=%d",y);

    return 0;

}
