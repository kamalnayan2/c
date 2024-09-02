#include<stdio.h>
void main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int (*p)[10],i;
    p=&a;
    for(i=0;i<11;i++)
    {
     printf("\n%d",a[i]);
    }
    getch();
}