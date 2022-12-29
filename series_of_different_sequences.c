#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,a,b,k1=0,k2=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            a=pow(5,k1);
            printf("%d ",a-3);
            k1++;
        }
        else
        {
            b=pow(3,k2);
            printf("%d ",b+2);
            k2++;
        }
    }
}