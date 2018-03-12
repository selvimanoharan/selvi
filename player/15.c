#include<stdio.h>
#include<string.h>
void main()
{
    int a,j,c=0,i,max=0;
    char str[13],k;
    printf("enter the string");
    scanf("%s",str);
    a=strlen(str);
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
        if(str[i]==str[j])
        {
         c++;
        }
    }
    if(c>max)
    {
        k=str[i];
        max=c;
    }
}

printf("repeated character:%c",k);
}
