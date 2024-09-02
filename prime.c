void main()
{
    int n,i,c=0;
do
{c=0;
 printf("\nenter the no\n");
    scanf("%d",&n);
   for(i=2;i<n;i++)
    {
        if(n%i==0)
        c=c+1;
       
    }
    if(c==0)
    printf("%d is prime\n",n);
    
    else
    printf("%d is not prime\n",n);
    getch();

} while (n!=0);
}