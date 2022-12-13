#include<stdio.h>
int main()
{
    int i,n,m,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            f=1;
            break;
        }
    }
    if(f!=1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}