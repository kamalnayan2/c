#include<stdio.h>
int n,i;
struct emp
{
int id;
char name[10];
float sal;
}e1[10];
void main()
{
int  s;
char a[10];
void name(char a[10]);
void id();
void all();
void sal();
void maxsal();
printf("eenter the no of emp\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    printf("enter the %d emp id,name.sal\n",i+1);
    scanf("%d%s%f",&e1[i].id,&e1[i].name,&e1[i].sal);
}
while(s!=0)
{
printf("enter the choic\n");
printf("1.search by name\n");
printf("2.search by id\n");
printf("3.display all\n");
printf("4.sal having >50000\n");
printf("5.maxsal\n");
printf("0.exit\n");
scanf("%d",&s);

switch(s)
{
    case 1:
    printf("enter the name\n");
    scanf("%s",&a);
    name(a);
    break;
    case 2:id();
    break;
    case 3:all();
    break;
    case 4:sal();
    break;
    case 5:maxsal();
    break;
    case 0:
    printf("\n exit");
    break;
default:
printf("enter the valid no\n");
break;

}
}
getch();

}
void name(char a[10])
{
    
    for(i=0;i<n;i++)
    {
        if(a[i]==)
        printf("%d%s%f",e1[i].id,e1[i].name,e1[i].sal);

    }
}

void id()
{
    int s;
    printf("enter the id\n");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==e1[i].id)
        printf("%d%s%f",e1[i].id,e1[i].name,e1[i].sal);

    }
}
void all()
{
    printf("id\tname\tsal\n");
    for(i=0;i<n;i++)
    {
    
        printf("%d\t%s\t%f\n",e1[i].id,e1[i].name,e1[i].sal);

    }
}

void sal()
{
    for(i=0;i<n;i++)
    {
        if(e1[i].sal>50000)
        printf("%d%s%f",e1[i].id,e1[i].name,e1[i].sal);

    }
}
void maxsal()
{
    int max=0;
    for(i=0;i<n;i++)
    {
        if(max<e1[i].sal)
        max=e1[i].sal;
    }
    for(i=0;i<n;i++)
    {
        if(e1[i].sal==max)
        printf("%d%s%f",e1[i].id,e1[i].name,e1[i].sal);

    }
}