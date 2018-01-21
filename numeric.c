#include<stdio.h>
#include<string.h>
void main()
{
	int sum=0,a;
	char str[50];
  printf("Enter the string");
  gets(str);
	a=strlen(str);
	for(int i=0;i<=a;i++)
	{
		if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')		{
		    sum=sum+1;
		}
	}
	printf("The no of line in theparagraph %d\n",sum);
}
