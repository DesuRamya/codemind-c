#include<stdio.h>
int main()
{
    int i,n,a[n],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c+=1;
        }
    }
    if(c==n)
    printf("True");
    else
    printf("False");
}