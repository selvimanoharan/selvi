#include<stdio.h>
void main()
{
    int c=0,i;
    char str[50];
    printf("enter the string");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        c++;
    }
    printf("%d",c);
}
