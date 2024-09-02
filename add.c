#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10],str3[10];
    int m,l1;
    printf("\nenter the first string\n");
    gets(str1);
    printf("\nenter the second string\n");
    gets(str2);
    printf("first string is \n");
    puts(str1);
    printf("second string is \n");
    puts(str2);    
   do{ printf("1:length of string\n2:convert string upper and lower\n");
    printf("3:to copy one string to another\n4:concatercat two string\n5:compare two string\n6:exit\n");
    printf("enter the choice......\n");
    scanf("%d",&m);
    
    switch(m)
   {
    case 1:
   l1=strlen(str1);
    printf("length of string is %d\n",l1);
    break;
    case 2:
    strupr(str1);
     printf("string in upper case\n");
     puts(str1);
     strlwr(str1);
     printf("string in lower case\n\n\n");
    puts(str1);
    break;
     
    case 3:
        strcpy(str3,str1);
        printf("copy string is\n");
        puts(str3);
        break;
        
    case 4:
        strcat(str1,str2);
        printf("concatenate two string is\n");
        puts(str1);
        break;
    case 5:
      l1=strcmp(str1,str2);
      if(l1==0)
      printf("first string is equal to second string\n");
      else if(l1>0)
      printf("srt1 is greater than str2\n");
      else
      printf("srt1 is smaller than str2\n");
      break;
    case 6:
    printf("exit \n");
    break;
    default:
    printf("ennter the valid no\n");
   }
 }while(m!=6);  

}