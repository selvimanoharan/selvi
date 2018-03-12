#include<stdio.h>
void main()
{
    int a,i;
    char str[13];
    printf("enter the string");
    scanf("%s",str);
    a=strlen(str);
    for(i=a-1;i>=0;i--)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
           
        }
        else
        {
        printf("%c",str[i]);
        }
    }
}
