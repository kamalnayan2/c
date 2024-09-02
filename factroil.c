#include<stdio.h>
//recurse function use in factroil
int fact(int a)
{
    if(a==1)
    return 1;
    else
    return a*fact(a-1);
}


void main()
{
    int x,y;
    printf("enter the no \n");
    scanf("%d",&x);
    y=fact(x);
    printf("factroil is %d",y);
    getch();
    
}