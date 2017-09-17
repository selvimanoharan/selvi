#include<stdio.h>
int main()
{
  int i,f,l;
  printf("enter the first and last interval");
  scanf("%d%d",&f,&l);
  for(i=f;i<=l;i=i+2)

    {
      printf("%d",i);
    }
    return 0;
}
