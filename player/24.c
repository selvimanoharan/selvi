#include<stdio.h>
int main()
{
    int i,a,f=0;
    char str[10];
    printf("enter the string");
    scanf("%s",str);
    a=strlen(str);
    for(i=0;i<a;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            f++;
        }
    }
    if(f==a)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
