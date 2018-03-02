#include<stdio.h>
void main()
{
  int f=0;
  char str[10];
  printf("enter the day");
  scanf("%s",&str);
  if(str=="saturday"||str=="sunday")
  {
    f++;
  }
  if(f==0)
  {
    printf("no");
  }
  else
  {
    printf("yes");
  }
}
