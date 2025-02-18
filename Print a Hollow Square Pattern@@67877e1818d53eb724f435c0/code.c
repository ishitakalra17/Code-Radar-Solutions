#include<stdio.h>
int main()
{
    int i,j,a;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {if(i==1 || i==a+1)
    {for(i;i<a+1;i++)
    {printf("*");}}}
    return 0;
}