#include<stdio.h>
int main()
{
    long long int n;
    int c=0;
    scanf("%lld",&n);
    while(n>0)
    {
        c++;
        n=n/10;
    }
    if (c==10)
    printf("Valid");
    else
    printf("Invalid");
}