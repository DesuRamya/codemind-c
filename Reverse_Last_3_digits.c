#include<stdio.h>
int main()
{
    int i,n,m,r,s=0,r1,a;
    scanf("%d",&n);
        r=n%1000;
        a=n/1000;
    while(r!=0)
    {
        r1=r%10;
        s=s*10+r1;
         r=r/10;
    }
    m=a*1000+s;
    printf("%d",m);
}