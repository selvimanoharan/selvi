#include<stdio.h>
#include<string.h>
int main()
{
  int a,i;
  char str[100];
  printf("enter the string");
  gets(str);
  a=strlen(str);
  for(i=0;i<a;i++)
  {
    if((str[i]>='A'||str[i]<='Z')&&(str[i]>='a'||str[i]<='z')&&(str[i]>='0'||str[i]<='9'))
    {
      
    }
  }
  printf("yes");
  return 0;
}
