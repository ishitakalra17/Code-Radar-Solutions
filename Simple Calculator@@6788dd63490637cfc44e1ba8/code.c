#include<stdio.h>
int main()
{int a,b,result;
char c;
scanf("%d %d %c",&a,&b,&c);
if( c=='*')
{result=a*b;
printf("%d",result);}
else if(c=='/'&& b!=0)
{result=a/b;
printf("%d",result);}
else if(c=='+')
{result=a+b;
printf("%d",result);}
else if(c=='/'&& b==0)
{printf("error");}
else if(c=='-' )
{result=a-b;
printf("%d",result);}
return 0;
}