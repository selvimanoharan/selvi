#include<stdio.h>
#include<string.h>
void main()
{
    int a,i,j,c=0,d=0;
  char str[10];
  printf("enter the string");
  scanf("%s",str);
  a=strlen(str);
  for(i=0;i<a;i++)
  {
    if(str[i]=='(')
    {
        c++;
  }
  else
  {
    d++;
  }
  }
  if(c==d)
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }
  
}
