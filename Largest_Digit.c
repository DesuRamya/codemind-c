
#include<stdio.h>
int main()
{
    int n,i=0,r=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r>i)
        {
            i=r;
        }
        n=n/10;
    }
    printf("%d",i);
}//largest digit 6--2 adv