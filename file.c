#include<stdio.h>
#include<stdlib.h>
void main()
{
    char c;
    int ch=0,wo=0,li=0;
    FILE *fp;
    fp=fopen("b.txt","r");
    printf("enter =the name\n");

    do
    {c=fgetc(fp);
     ch++;
     if(c=='\n'||c==' ') 
     wo++;
     if(c=='\n')
     li++;
     
        
    }while(c!=EOF);
    fclose(fp);
    printf("on of char is %d\n no of word is %d\n no of line is %d\n",ch,wo,li);
    getch();
    
}