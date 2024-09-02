void main()
{
    int a[10][10],m,n,i,j;
    printf("enter the no row and column\n");
    scanf("%d%d",&m,&n);
    printf("enter the element \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("array is %d x %d is...\n",m,n);
    for(i=0;i<m;i++)
    {printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }


}