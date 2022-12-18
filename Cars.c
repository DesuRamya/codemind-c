#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    i=n/4;
    j=n%4;
    if(j==0)
    {
        printf("%d",i);
    }
    else
    {
        printf("%d",i+1);
    }
}