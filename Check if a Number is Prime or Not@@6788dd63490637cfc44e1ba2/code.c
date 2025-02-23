#include<stdio.h>
int main()
{int i,a;
scanf("%d",&a);
for(i=1;i<a;i++)
{if(a%i==0)
{printf("Not Prime");}
break;
else if(a%i!=0){printf("Prime");}}
return 0;}