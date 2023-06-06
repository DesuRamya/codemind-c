#include<stdio.h>
int sum(int n)
{
    int i,s=0,r;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+r;
    }
    return s;
}
int main()
{
    int i,n,s;
    scanf("%d",&n);
    while(n>9)
    n=sum(n);
    printf("%d",n);
}