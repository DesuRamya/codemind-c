#include<stdio.h>
int main()
{
    int n,i,f;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    f=a[0];
    int j=1;
    while(j<n)
    {
        if(a[j]%f==0)
        j++;
        else
        {
            f=a[j]%f;
            i++;
        }
    }
    printf("%d",f);
}