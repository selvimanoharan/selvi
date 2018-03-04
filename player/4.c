#include<stdio.h>
#include<string.h>
void main()
{
  int a;
  char str[100];
  printf("enter the string");
  scanf("%s",str);
  a=strlen(str);
  str[a]='.';
  printf("%s",str);
  
}
  
  
