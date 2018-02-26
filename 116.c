#include<stdio.h>
#include<string.h>
void main()
{
  int a,b,i;
  char s[15],s1[15];
  printf("enter the two string");
  scanf("%s %s",&s,&s1);
  a=strlen(s);
  b=strlen(s1);
  for(i=0;i<b;i++)
  {
    s[a]=s1[i];
    a++;
}
      printf("%s",s);
}
