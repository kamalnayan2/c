#include<stdio.h>
void main()
{
    int a[10],m,i;
    printf("enter the no of element \n");
    scanf("%d",&m);
    printf("enter the array\n");                

    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("the element is ..\n");
    for(i=0;i<m;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("reverse of array is\n");
    for(i=m-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    getchar();
}