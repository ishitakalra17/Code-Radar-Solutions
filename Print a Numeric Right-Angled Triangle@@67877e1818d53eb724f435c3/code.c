#include<stdio.h>
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {for(j=0;j<i;j++)
    // {for(k=1;k<i;k++)
    {printf("%d",j);}
    printf("\n");}
    return 0;
}