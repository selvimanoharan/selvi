#include<stdio.h>
void main()
{
  int i,j,l,f,n=0,c;
  printf("enter the limit");
  scanf("%d %d",&f,&l);
  for(i=f;i<=l;i++)
  {
      c=0;
    for(j=1;j<=i;j++)
    {
    
      if(i%j==0)
      {
        c++;
      }
    }
    if(c==2)
    {
      n++;
    }
}
printf("%d",n);
}
