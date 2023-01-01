#include<stdio.h>
int main()
{
    int n,m,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n%2!=0)
        {
            m=(n+1)/2;
            printf("%d
",m);
        }
        if(n%2==0)
        {
            printf("%d
",n/2);
        }
    }
}