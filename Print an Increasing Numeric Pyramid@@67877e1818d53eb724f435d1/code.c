#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {for(j=1;j<=a-i;j++)
    printf(" ");
    for(j=1;j<=a;j++)
    printf("%d ",j);}
    return 0;
}