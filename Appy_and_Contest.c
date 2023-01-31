#include<stdio.h>
int main()
{
    int t,a,b,k,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&n,&a,&b,&k);
        if((n/a>=k&&n/b!=k)||(n/b>=k&&n/a!=k))
        printf("Win
");
        else
        printf("Lose
");
    }
}