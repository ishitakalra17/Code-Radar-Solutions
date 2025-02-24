#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        if(i==0 || i==a-1)
        {for(j=0;j<a;j++)
        {printf("*");}}
        else{
            for(j=0;j<a;j++)
            {if(j==0 || j==a-1)
            {printf("*");}
            else{printf(" ");}}}
    }
    return 0;
}