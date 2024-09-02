#include<stdlib.h>
#include<stdio.h>
void main()
{
    int r,n,p,i;
    char name[10];
    FILE *fp;
    fp=fopen("stud.txt","r");
    if(fp==NULL)
    {
        printf("file doesnot exit\n");
        exit(0);
    }
    printf("enter the rollno,name,percent\n");

        fscanf(fp,"%d%s%d",&r,&name,&p);
        printf("%d\t%s\t%d\n",r,name,p);

    fclose(fp);
    
    getch();
}