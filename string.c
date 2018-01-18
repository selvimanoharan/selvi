#include<stdio.h>
int main()
{
    int i,flag;
    char m[40];
    printf("enter the string");
    scanf("%s",&m[40]);
    for(i=0;m[i]!='\0';i++)
    {
      if(m[i]=='0'||m[i]=='1'||m[i]=='2'||m[i]=='3'||m[i]=='4'||m[i]=='5'||m[i]=='6'||m[i]=='7'||m[i]=='8'||m[i]=='9')
      {
        flag=flag+1;
      }
    }
    if(flag==0)
    {
      printf("given string is not numeric");
    }
    else
    {
      printf("given string is numeric");
    }
    return 0;
}
