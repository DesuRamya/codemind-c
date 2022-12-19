#include<stdio.h>
int main()
{
    int i,n,avg,sum=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
    if(avg==a[i])
    {
        c+=1;
    }
    }
    if(c>=1)
    printf("True");
    else
    printf("False");
}
