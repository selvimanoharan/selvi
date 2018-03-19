#include<stdio.h>
#include<string.h>
void main()
{
    int a,i,j;
  char str[10];
  printf("enter the string");
  scanf("%s",str);
  a=strlen(str);
  for(i=0;i<a;i++)
  {
    printf("%c",str[i]);
    i=i+2;
}
}
