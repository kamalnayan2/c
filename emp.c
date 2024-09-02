#include<stdlib.h>

// define structure data type+
struct emp
{
    int eno,it;
    char ename[10];
    int basis,hra,da,pf,sal; 
    
};
void main()
{
struct emp *p;
int i,n;
printf("enter the no of emp\n");
scanf("%d",&n);
//dynamic memory allocation by using malloc,calloc,free
p=(struct emp *)calloc(n,sizeof(struct emp));
printf("enter the eno ,ename,basis of emp\n");

//enter the data 
for(i=0;i<n;i++)
{   printf("enter %d emp\n",i+1);
    scanf("%d%s%d",&p[i].eno,&p[i].ename,&p[i].basis);
    p[i].hra=p[i].basis*10/100;
    p[i].da=p[i].basis*15/100;
    p[i].pf=p[i].basis*7/100;
    p[i].it=2000;
   p[i].sal=p[i].basis+p[i].hra+p[i].da+p[i].pf+p[i].it;
}
printf("eno\tename\tbasis\thra\tda\tpf\tit\tsal\n");
for(i=0;i<n;i++)
{
    printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n",p[i].eno,p[i].ename,p[i].basis,p[i].hra,p[i].da,p[i].pf,p[i].it,p[i].sal);
}
getch();
free(p);
}