#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
    {printf("Loss\n");}
    else if(b>a)
    {printf("Profit\n");}
    else
    {printf("No Profit No Loss")}
    return 0;
}