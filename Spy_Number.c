#include<stdio.h>
int main()
{
    int m,n,a=1,s=0;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        s=s+m;
        a=a*m;
        n=n/10;
    }
    if(s==a)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    
}
