
void main()
{
    int a[10][10],i,j,b=0;
    printf("enter the number\n");
    

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {b=b+1;
           a[i][j]=b;
           
        }

    }
   for(i=0;i<10;i++)
    { printf("\n");
        for(j=0;j<10;j++)
        {
            printf("\t%d",a[i][j]);
        }

    }
}



