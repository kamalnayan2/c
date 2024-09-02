#include<stdio.h>
struct time
{
    int s,h,m;
}*t;
void main()
{

   printf("enter the time\n");
   scanf("%d%d%d",&t.h,&t.m,&t.s);
   printf("the time is %d:%d:%d\n",t.h,t.m,t.s);
   getch();

}
