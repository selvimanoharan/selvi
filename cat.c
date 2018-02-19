#include<stdio.h>
#include<string.h>
void main()
{
  int a,b,i;
  char str[15],str1[15];
  printf("enter the two string");
  scanf("%s %s",&str,&str1);
  a=strlen(str);
  b=strlen(str1);
  for(i=0;i<b;i++)
  {
    str[a]=str1[i];
    a++;
}
      printf("%s",str);
}
