#include<stdio.h>
int main()
{
    int a,i;
    char j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {for(j='A';j<='A'+i;j++)
    printf("%c",j);
    printf("\n");}
    return 0;
}