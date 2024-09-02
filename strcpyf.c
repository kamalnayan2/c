// count the no of 'a' and 'A' in the string Ex:string=Apple, count=1
void main()
{
    char a[10];
    int i,c;

    printf("enter two the string \n");
    gets(a);
   
    for(i=0;a[i]!='\0',i++)
    {
        if(a[i]=='a'||a[i]=='A')
        c++;
    }
    a[i]='\0';
printf("nunber of a and A %d",c);

    getch();
    
}