#include<stdio.h>
int np(int n){
    int c=0,i;
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            c=c+1;
        }
    }
    if (c==2)
    return 0;
    else
    return 1;
}
int main()
{
    int i,n,r=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            if (np(i))
            r=r+1;
        }
    }
printf("%d",r);
}