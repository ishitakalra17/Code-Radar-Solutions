#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        for(j=a;j<a-i+1;j--)
        {printf("*");}
        printf("\n");
    }
    return 0;
}