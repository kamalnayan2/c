#include<stdio.h>
void main()
{
    int  a,s=0,d;
    printf("enter the number\n");
    scanf("%d",&a);
    while(a>0)
    {
        d=a%10;
        a=a/10;
        s=s+d;
    }



printf("\nsum of number is %d",s); 
}

