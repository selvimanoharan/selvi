#include<stdio.h>
#include<string.h>
void main()
{
  int i,a,c=0;
  char str[100];
  printf("enter the string");
  scanf("%s",&str);
  a=strlen(str);
  for(i=0;i<=a;i++)
  {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    {
    c++;
    }
  }
if(c==0)
{
  printf("no");
}
    else
    {
      printf("yes");
    }
}
