#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    float r;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
      r=(float)sum/n;
    printf("%.2f",r);
}