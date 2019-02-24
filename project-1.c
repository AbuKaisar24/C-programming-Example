//A simple telephone book//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char names[100][40];
char numbers[100][40];

int loc=0;
int menu(void);
void enter(void);
void load(void);
void save(void);
void find(void);

int main(void)
{
    int choice;
    do
    {
        choice=menu();
        switch(choice)
        {
        case 1:
            enter();
            break;
        case 2:
            find();
            break;
        case 3:
            save();
            break;
        case 4:
            load();

        }

    }
    while(choice!=5);
    return 0;
}
//get menu choice//
int menu(void)
{
    int i;
    char str[80];
    printf("1. Enter the name and number\n");
    printf("2. Find number\n");
    printf("3. Save directory to disk\n");
    printf("4. Load directory from disk\n");
    printf("5.Quit\n");

    do
    {
        printf("\nEnter your choice :");
        gets(str);
        i=atoi(str);
        printf("\n");


    }
    while(i<1||i>5);


  return i;
}
void enter (void)
{
    for(loc=0;loc<100;loc++)
{
        if(loc<100)
        {



    printf("Enter name and phone number:\n");
    gets(names[loc]);

    if(!*names[loc])
        break;

    gets(numbers[loc]);
}
}
}
void find(void)
{
    char name[80];
    int i;
    printf("Enter name:\n");
    gets(name);

    for(i=0;i<100;i++)
        if(!strcmp(name,names[i]))
        printf("%s%s\n",name[i],numbers[i]);

}
void load(void)
{
    FILE*fp;
    if(fp=fopen("phone","r")==NULL)
{


        printf("Cannot open file:\n");
    exit(1);
}
 loc=0;

while(!feof(fp))
{
    fscans(fp,"%s%s",names[loc],numbers[loc]);
    loc++;
}
fclose(fp);
}

void save(void)
{
    FILE*fp;
    int i;
    if((fp=fopen("phone","w"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);

    }
    for(i=0;i<loc;i++)
    {
        fprintf(fp,"%s%s",names[i],numbers[i]);
    }
    fclose(fp);

    return 0;

}
