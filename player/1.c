#include<stdio.h>
#include<string.h>
void main()
{
 char str[10];
 int a,i;
 printf("enter the string");
 scanf("%s",&str);
 a=strlen(str);
 for(i=a;i>=0;i--)
 {
   printf("%c",str[i]);
 }
}
