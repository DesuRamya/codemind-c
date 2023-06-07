#include<stdio.h>
int isprime(int n)
{
    int i,c=0;
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        c=c+1;
    }
    if (c==2)
    return 1;
    else
    return 0;
}
int main()
{
    int t,i,n,j,r1,r2,a1,a2;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for (j=n;j>=1;j--)
        {
            if (isprime(j))
            {
                r1=j;
                break;
            }
        }
        for (j=n+1;j<=2000000;j++)
        {
            if (isprime(j))
            {
                r2=j;
                break;
            }
        }
        a1=n-r1;
        a2=r2-n;
        if (a1>a2)
        printf("%d
",r2);
        else if(a1<=a2)
        printf("%d
",r1);
    }
}