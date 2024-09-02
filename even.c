#include<stdio.h>
void main()
{ // if 10,20,30  '20 is between 10 and 30

    int a,b,c;
    printf("enter the three number \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("%d is detween %d and %d",a,b,c);
    else if(a<b && b<c)
    printf("%d is detween %d and %d",b,a,c);
    else if(a>b && c<b)
    printf("%d is detween %d and %d",c,b,a);
    getch();
    
} 