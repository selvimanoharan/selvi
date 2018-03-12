#include<stdio.h>
#include<string.h>
void main()
{
  int m,i,a,k=0;
  char n[14];
  printf("enter the string");
  scanf("%s",&n);
  a=strlen(n);
  printf("enter the number ");
  scanf("%d",&m);
  for(i=a-1;i>=0;i--)
    {
    k++;
      if(k<=m)
      {
      printf("%c",n[i]);
    }
  }
}
  
