#include<stdio.h>
int main()
{
    int n,a=0,b=0;
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        if(a>b)
        {
            b=a;
        }
        n=n/10;
    }
    printf("%d",b);
}