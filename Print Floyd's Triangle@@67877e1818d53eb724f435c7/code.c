#include<stdio.h>
int main()
{
  int a,i,j,k;
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {for(j=1;j<=i;j++)
{for(k=i+j;k<i+2j;k++)
{printf("%d ",k);}
printf("\n");}}
  return 0;
}