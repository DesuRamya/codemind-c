#include<stdio.h>
int main()
{
    int n,k,x,y,m,t;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(n==k)
    {
        printf("%d",k*x);
    }
    else if(x>y)
    {
        printf("%d",k*x+(n-k)*y);
    }
    else
    {
        printf("%d",n*x);
    }
}