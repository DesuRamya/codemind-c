#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,r,s=0;
    scanf("%d",&n);
    m=n*n;
    while(m>0)
    {
        r=m%10;
        m=m/10;
        s=s+r;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}