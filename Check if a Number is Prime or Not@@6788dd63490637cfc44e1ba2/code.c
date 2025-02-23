#include<stdio.h>
int main()
{int a,i,b=1;
scanf("%d",&a);
for(i=2;i*i<=a;i++)
{if(a%i==0)
{b=0;
break;}}
if(b=0){printf("Not Prime");}
else{printf("Prime");}
return 0;
}