#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    
    for(i=1;i<=10;i++)
    {printf("%d * %d = %d",a,i,a*i);
    printf("\n");}
    return 0;
}