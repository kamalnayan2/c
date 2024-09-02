#include<stdio.h>
int main()
{  // find maximum of two number   
    int a,b;
    printf("enter the no\n");
    scanf("%d%d",&a,&b);
    // check a<b , b>a
    if(a<b)
    printf("maximum no is %d",b);
    else
    printf("maximum number is %d",a);
    getch();
    
}