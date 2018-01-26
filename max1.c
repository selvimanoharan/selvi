#include<stdio.h>
int main()
{
int i,j,n;
char a[100];
printf("enter the num");
scanf("%d",&n);
printf("no of element in array ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
int temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("%d",a[n]);
return 0;
}
