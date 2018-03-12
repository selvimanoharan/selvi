include<stdio.h>
#include<string.h>
void main()
{
  int i,n;
  char str[100];
  printf("enter the word");
  scanf("%[^\n]s",&str);
  n=strlen(str);
  for(i=0;i<n;i++)
  {
  str[0]-=32;
  if(str[i]==' ')
  {
    str[i+1]-=32;
  }
  printf("%c",str[i]);
  }
