#include <stdio.h>
int main()
{ int a;
scanf("%d",&a);
int b;
scanf("%d",&b);
int c;
scanf("%d",&c);
if(a>b && a>c)
{printf("%d",a);}
else if(b>c && b>a)
{printf("%d",b);}
else{printf("%d",c);}
return 0;}