#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i=2,max,lcm=1;
    if(a>b)
    max=a;
    else
    max=b;
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
        {
            i++;
        }
    }
    lcm=lcm*a*b;
    printf("%d",lcm);
}