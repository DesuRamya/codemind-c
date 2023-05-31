#include<stdio.h>
int fact(int n)
{
    if (n==0 || n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int i,n,r,s=0;
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
        r=n%10;
        s=s+fact(r);
        n=n/10;
    }
    if (t==s)
    printf("The number %d is a strong number",t);
    else
    printf("The number %d is not a strong number",t);
}