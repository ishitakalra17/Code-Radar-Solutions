#include<stdio.h>
int fibonacci()
{
    int a;
    scanf("%d",&a);
    if(a==0)
    return 0;
    if(a==1)
    return 1;
    else(return fibonacci(a-1)+fibonacci(a-2);)
    return 0;
}