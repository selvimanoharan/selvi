#include<stdio.h>
void main()
{
  char a=32;
  while(a<=127)
  {
    printf(" %c=[%03d]",a,a);
    a++;
  }
}
