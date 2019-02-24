#include<stdio.h>
#include<math.h>
int main()
{


    int choice;
    printf("\nWhat is your choice");
    printf("\n1.c to f\n2.f to c\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        int ca;
        printf("\nca=");
        scanf("%d",&ca);
        float far=1.8*ca/2;
        printf("\n c to f=%f",far);

    }
    else if(choice==2)
    {
        int fa;
        printf("\nfa=");
        scanf("%d",&fa);
        float cal=fa-32/1.8;
        printf("\n f to c=%f",cal);


    }
    return 0;
}
