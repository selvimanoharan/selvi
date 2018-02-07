#include<stdio.h>
#include<string.h>
void main()
{
  int i,a;
   char str[20];
   printf("enter the string");
   scanf("%s",&str);
   a=strlen(str);
   for(i=0;i<=a;i++)
   {
     if(i%2==0)
     {
       printf("%c",str[i]);
     }
   }
   printf("\n");
   for(i=0;i<a;i++)
   {
     if(i%2!=0)
     {
     printf("%c",str[i]);
   }
   }
}
