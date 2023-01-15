#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
       int ev=2*i;
        printf("%d ",ev);
    }
}