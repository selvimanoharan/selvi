#include<stdio.h>
void main()
{
  int i,j,c=0,f,l;
  printf("enter the limit");
  scanf("%d %d",&f,&l);
  for(i=f+1;i<=l;i++)
  {
    for(j=1;j<=i;j++)
    {
      if(i%j==0)
      {
        c++;
      }
    }
    if(c==2)
    {
      printf("%d",i);
    }
}
}

