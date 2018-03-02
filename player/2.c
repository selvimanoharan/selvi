#include<stdio.h>
#include<string.h>
void main()
{
 int n,i,fact=1;
 printf("enter the num");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   fact=fact*i;
 }
 printf("%d",fact);
}
 
