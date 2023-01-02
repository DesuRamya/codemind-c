#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,d,p,d1,p1,k,r;
    scanf("%d%d",&n,&x);
    d=log10(n)+1;
    d1=d-x;
    p=pow(10,x);
    p1=pow(10,d1);
    r=n%p;
    n=n/p1;
    k=r-n;
    k=abs(k);
    printf("%d",k);
}