#include<stdio.h>
void main()
{
    int a[10][10],m,n,i,j,min,max;
    printf("enter the row and column\n");
    scanf("%d%d",&m,&n);
    printf("eenter the element \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("A matrix is");
    for(i=0;i<m;i++)
    {  printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
min=a[0][0];
max=a[0][0];
for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)  
        {
            if(min>a[i][j])
            min=a[i][j];
            
            if(max<a[i][j])
            max=a[i][j];
        
        }
    }

    printf("\n\nmax is =%d\n min is = %d\t",max,min);
    

}
