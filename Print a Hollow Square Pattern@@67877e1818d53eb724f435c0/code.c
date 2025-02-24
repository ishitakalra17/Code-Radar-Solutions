#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        if(i==0 || i==n)
        {for(j=0;j<a;j++)
        {printf("*");}}
        else if(j==1 || j==n )
        {for(j=0;j<a;j++)
        {printf("* ");}}
        printf("\n");
    }
    return 0;
}