#include<stdio.h>
int main()
{
    int a,b,max,lcm=1,i=2;
    scanf("%d%d",&a,&b);
    if(a<b)
    max=b;
    else
    max=a;
    while(a!=1&&b!=1&&i<=max)
    {
    if(a%i==0&&b%i==0)
    {
        lcm=lcm*i;
        a=a/i;
        b=b/i;
        i=2;
    }
    else
    i++;
    }
    lcm=lcm*a*b;
    printf("%d",lcm);
}
