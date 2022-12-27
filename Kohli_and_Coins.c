#include<stdio.h>
int main()
{
    int n,r,s=0,p,q;
    scanf("%d",&n);
    if(n%10==0)
    {
        r=n/10;
        s=s+r;
        printf("%d",s);
    }
    else if(n%5==0)
    {
        r=n/10;
        q=n%10;
        p=q/5;
        s=s+p+r;
        printf("%d",s);
    }
    else
    {
        printf("-1");
    }
}