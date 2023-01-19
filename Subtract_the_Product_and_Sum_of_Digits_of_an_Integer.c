#include<stdio.h>
int main()
{
    int m,n,s=0,p=1;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        s=s+m;
        p=p*m;
        n=n/10;
    }
    printf("%d",p-s);
}//subtract the pro and sum 5--2 advanced
