#include<stdio.h>
void main()
{
    int a[]={12,13,14},*p,i;
    p=&a;
    printf("address is %p",p); //address of a
    printf("\n address is %p",&a);// address of a variable
    printf("\n value is %d",*p);//value of a 
    for(i=0;i<3;i++)
    {
        printf("\naddress is %u-%d",p,*p);
        p=p+1;
    }

}