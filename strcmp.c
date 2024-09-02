#include<stdio.h>
void main()
{
    int s;
    char str[10],str2[10];

   printf("enter the two strring\n");
   gets(str);
   gets(str2);
   s=strcmp(str,str2);
   if(s==0)
   printf("eequal\n");
   else if(s>0)
   printf("1 <2nd\n");
   else
   printf("1st > 2nd\n");
   getch();
}