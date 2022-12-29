#include<stdio.h>
int main()
{
    int n,s1,r,s=0,s2,r1,su=0;
    scanf("%d",&n);
    int t=n;
    s1=n*n;
    while(t!=0)
    {
        r=t%10;
        t=t/10;
        s=s*10+r;
    }
    s2=s*s;
    while(s2!=0)
    {
        r1=s2%10;
        s2=s2/10;
        su=su*10+r1;
    }
    if(su==s1)
    printf("True");
    else
    printf("False");
}//adam number
