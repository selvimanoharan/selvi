#include<stdio.h>
#include<string.h>
void main()
{
  int k,i,a;
  char str[100];
  printf("enter the string");
  gets(str);
  printf("enter the number");
  scanf("%d",&k);
  a=strlen(str);
  for(i=0;i<k;i++)
  {
    printf("%c",str[i]);
  }
}
  
