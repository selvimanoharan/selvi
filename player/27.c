#include<stdio.h>
#include<string.h>
void main()
{
    int a,i;
    char str[15];
    printf("enter the string");
    scanf("%s",str);
    a=strlen(str);
    for(i=0;i<a;i++)
    {
        str[i]-=32;
    }
    printf("%s",str);
}
