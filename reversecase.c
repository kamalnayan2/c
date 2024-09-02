#include<stdio.h>
#include<stdlib.h>
void main()
{
    char c;
    int co=0,li=0,wo=0;
    FILE *fp;
    fp=fopen("a.txt","r");
  
    do
    {
        c=fgetc(fp);
        co++;
        if(c=='\n'||c==' ')
        li++;
        if(c==' ')
        wo++;
    }while(c!=EOF);
    printf("no of char is %d\nno of word is %d\nno of line is %d \n",co,wo,li);


    fclose(fp);
    getch();

}