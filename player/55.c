#include<stdio.h>
void main()
{
    int b=0,i,j,a;
    char str[50],str1[50];
    printf("enter the 2 string");
    scanf("%s%s",str,str1);
    a=strlen(str);
    j=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==str1[j])
        {
        b++;
    }
    j++;
    }
    if(b==a)
    {
        printf("yes");
    }
    else
    {
        printf("no");
        
    }
}
