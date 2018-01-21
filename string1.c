#include<stdio.h>
#include<string.h>
int main()
{
  int a,i;
  char str[20],str1[20];
  printf("enter the string ");
  scanf("%s",&str);
  printf("enter the another string");
  scanf("%s",str1);
  a=strlen(str);
  i=strlen(str1);
  if(a>i)
  {
    printf("%s",str);
  }
  else if(a<i)
  {
    printf("%s",str1);
  }
  else
  {
    printf("%s",str);
  }
 return 0;
}
