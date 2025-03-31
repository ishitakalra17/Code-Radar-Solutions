#include<stdio.h>
int fibonacci(int a)
{
    if(a==0)
    return 0;
    if(a==1)
    return 1;
    else{
        return fibonacci(a-1)+fibonacci(a-2);}
}
int main()
{
    int num;
    scanf("%d",&num);
    int result=fibonacci(num);
    printf("%d",result);
    return 0;
}