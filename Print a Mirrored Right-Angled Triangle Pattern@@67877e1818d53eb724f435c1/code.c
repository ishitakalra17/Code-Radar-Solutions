#include<stdio.h>
int main()
{
    int a,i,s,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {for(s=0;s<a-i;s++)
    {
        printf(" ");
    }
    {
        for(j=0;j<i;j++)
        {printf("*");}
    }
    printf("\n");
    }
    return 0;
}