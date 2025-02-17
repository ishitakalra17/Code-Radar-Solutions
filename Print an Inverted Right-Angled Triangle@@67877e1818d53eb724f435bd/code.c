#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    for(i;i>0;i--)
    {printf("*"*i\n);
    printf("*"*(i-1));}
    return 0;
}