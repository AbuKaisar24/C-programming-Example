#include<stdio.h>
#include<string.h>
struct student
{
    char name[40];
    int  marks;
};
void display(struct student *s)
{

    printf("\nname:%s",s->name);
    printf("\nmarks:%d",s->marks);


}
void  main()
{
    struct student s;
    strcpy(s.name," Raju ");
    scanf("%d",&s.marks);

    display( &s );
}
