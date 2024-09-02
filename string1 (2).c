#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,l=0;
    char *p=(char *)calloc(20,sizeof(char));
    gets(p);
    puts(p);
    l=strlen(p);
    for(i=1;i<25;i++)
    {
        for(j=1;j<80;j=j+l)
        {
            gotoxy(j,i);
            cprintf("%s",*p);
            textcolor(i);
        }
    }
    return 0;
    free(p);
}