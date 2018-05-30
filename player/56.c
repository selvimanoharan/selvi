#include<stdio.h>
#include<string.h>
void main()
{
    int c=0,i,a;
    char str[50],k;
    printf("enter the string");
    scanf("%s",str);
    scanf("%c",&k);
    a=strlen(a);
    for(i=0;i<=a;i++)
    {
        if(str[0]==k)
        {
          printf("%d",i+1);  
          break;
        }
    }
}
