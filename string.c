#include<stdio.h>

void main()
{
int a[10],*p[10],m,i;
printf("enter no of element\n");
scanf("%d",&m);
printf("enter the element\n");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
printf("the element is....\n");
for(i=0;i<m;i++)
printf("\n%d",a[i]);
for(i=0;i<m;i++)
p[i]=&a[i];
printf("\nreverse or array is ...");;
for(i=m-1;i>=0;i--)
{
printf("\n%d",*p[i]);

}

}