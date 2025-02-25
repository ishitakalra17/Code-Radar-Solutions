#include<stdio.h>
int main()
{
    int a,i;
    char j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {for(j='A';j<='A'+(a-i+1);j++)
    printf("%d ",j);
    printf("\n");}
    return 0;
}
