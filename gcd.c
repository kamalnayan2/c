#include <stdio.h>
void main()
{
    int num1,num2,i,g;

    printf("enter the two number \n");
    scanf("%d%d",&num1,&num2);
   
    for(i = 0;i<=num2 && i<=num2;++i)
    {
        
	  if(num1%i==0 && num2%i==0)
	  g=i;
    

    }

    printf("gcd is %d",g);
    getch();
}