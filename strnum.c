#include<stdio.h>
#include<string.h>
void main()
{
  int a,i,f=0;
  char str[10];
  printf("enter the string");
  scanf("%s",&str[i]);
  a=strlen(str);
  for(i=0;i<a;i++)
  {
    if(str[i]>='0'&&str[i]<='9')
    {
      f=1;
    }
    
  }
  if(f==0)
  {
    printf("No");
    
  }
  else
  {
    printf("yes");
  }
}
