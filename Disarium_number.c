#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,m,q,r,x;
    scanf("%d",&n);
    m=log10(n)+1;
    q=n;
    while(q!=0)
    {
        r=q%10;
        x=pow(r,m);
        s=s+x;
        m--;
        q=q/10;
    }
    if(n==s)
    printf("True");
    else
    printf("False");
}