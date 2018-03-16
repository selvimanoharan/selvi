#include<stdio.h>
void main()
{
    int i,n;
    char str[10];
    printf("enter the string");
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        str[i]=str[i]+3;
        printf("%c",str[i]);
    }
}
