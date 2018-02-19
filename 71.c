#include<stdio.h>
#include<string.h>
void main()
{
  
  int a,i,f=0,b;
  char str[10],str1[10];
  printf("enter the string");
  scanf("%s",&str);
  
  strcpy(str1,str);
  a=strlen(str1);
  for(i=a;i>=0;i--)
  {
    printf("%c",str1[i]);
    
  }
  b=strlen(str);
  for(i=0;i<a;i++)
{
  if(str[i]==str1[i])
  {
f++;
  }
}
if(f==b)
{
  printf("\nyes");
}
  else
  {
    printf("\nNo");
  }
}
