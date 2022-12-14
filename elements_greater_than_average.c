#include<stdio.h>
int main()
{
    int i,n,a[n],sum=0,count=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    r=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=r)
        {
            count++;
        }
    }
    printf("%d",count);
}