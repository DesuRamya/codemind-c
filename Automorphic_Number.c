#include<stdio.h>
int main()
{
    int n,c=1,s;
    scanf("%d",&n);
    s=n*n;
    while(n!=0)
    {
        if(n%10!=s%10)
        {
            c=0;
            break;
        }
        n=n/10;
        s=s/10;
    }
    if(c==1)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}//automorphic 6--1 advanced
