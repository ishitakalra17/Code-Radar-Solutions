#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    scanf("%d",&c);
    if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
    {printf("Valid");}
    else{printf("Invalid");}
}