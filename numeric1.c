#include<stdio.h>
#include<string.h>
void main()
{
  int a,i;
  char str[10];
  printf("enter the string");
  scanf("%s",&str);
  a=strlen(str);
  for(i=0;i<a;i++)
  {
    if(str[i]>='0'&&str[i]<='9')
    {
      printf("%c",str[i]);
    }
  }
}
