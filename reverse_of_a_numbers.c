#include<stdio.h>
int main()
{
    int a,n,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        s=s*10+a;
    }
    printf("%d",s);
}