#include<stdio.h>
int main()
{
    int i,n,a[100],count=0,r,sum=0;
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
        if(r>=a[i])
        {
            count++;
        }
    }
    printf("%d",count);
}