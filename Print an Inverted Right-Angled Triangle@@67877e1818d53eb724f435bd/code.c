#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        for(j=a;j<a-i+1;j++)
        {printf("*");}
        printf("\n");
    }
    return 0;
}