#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[50];
    int marks[5];
};
int main()
{
    struct student s[5];
    int i;
    printf("\nEnter the information:");
    for(i=0;i<=3;i++)
    {
        printf("\nName:");
        scanf("%s",s[i].name);
        s[i].id=i+i;
        printf("\nId:%d",s[i].id);
        //scanf("%d",&s[i].id);
        printf("\nCgpa:");
        scanf("%d",&s[i].marks);
    }
    for(i=0;i<=3;i++)
    {
        printf("name:%s\n",s[i].name);
        printf("Id:%d\n",i+1);
        puts(s[i].id);
        printf("Cgpa:%d\n",s[i].marks);
    }
    return 0;
}
