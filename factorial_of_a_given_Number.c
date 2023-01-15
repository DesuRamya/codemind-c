#include<stdio.h>
int main()
{
    int n,p=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=p*i;
    }
    printf("%d",p);
}