void main()
{
    int x,y;
    int reverse(int x);
    printf("enter the number\n");
    scanf("%d",&x);
    y=reverse(x);
    printf("reverse of no is =%d",y);
    getch();
   
}
int reverse(int a)
{
    int s=0,d; 
    while(a>0)
    {
        d=a%10;
        s=s*10+d;
        a=a/10;
    }
  return s;
}