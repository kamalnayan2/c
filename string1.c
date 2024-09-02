#include<stdio.h>
#include<stdlib.h>

void main()
{
    float *p,s=0,avg=0;
    int i;

    p=(float*)malloc(5*sizeof(float));
    printf("enter 5 float number\n");
    for(i=0;i<5;i++)
    {
        scanf("%f",(p+i));
        s=s+*(p+i);
    }
    realloc(p,3);
    printf("or enter the 3 float number\n");
    for(i=5;i<5+3;i++)
    {
        scanf("%f",(p+i));
        s=s+*(p+i);
    } 
    printf("sum is %f\n",s);
    avg=s/(5+3) ;
    printf("\naverage is %f",avg); 
    free(p);
    getch();
}