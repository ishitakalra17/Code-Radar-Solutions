#include<stdio.h>
int main()
{int a,i,k;
char j;
scanf("%d",&a);
for(i=1;i<=a;i++)
{
    for(j='A';j<i;j++)
    {printf("%c",j);}
    printf("\n");
}
return 0;
}