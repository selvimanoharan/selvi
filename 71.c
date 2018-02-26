#include<stdio.h>
#include<string.h>
void main()
{
  int c=0,i,a;
  char str[10],str1[10];
  printf("enter the string");
  scanf("%s",&str);
  a=strlen(str);
  strcpy(str1,str);
  int j=0;
  for(i=a-1;i>=0;i--)
  {
    if(str[i]==str1[j])
    {
      c++;
    }
    j++;
  }
if(c==a)
{
  printf("yes");
}
else
{
  printf("no");
}
}
