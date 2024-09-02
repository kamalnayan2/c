#include<stdio.h>
int main()
{
    int a[10][10],m,n,i,j,x;
    printf("enter the row and colum\n");
    scanf("%d%d",&m,&n);
    printf("enter the matrix\n");
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    { printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0 && j<i)
          { x=1;
             break;
          }
        }
    }
    
    
    if(x==1)
    printf("\nmatrix is not a upper");
    else
    printf("\nmatrix is upper\n");
 
}