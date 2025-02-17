#include<stdio.h>
int main()
{int a,b;
char c;
scanf("%d %d %c",&a,&b,&c);

if( c=="*")
{float result=a*b;
printf("%d",result);}
return 0;
}