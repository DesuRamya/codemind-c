#include<stdio.h>
int main()
{
    int i,n,a,b,c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=n%100;
        b=n/10;
        c=a%10;
        d=a/10;
    }
            if(b%2==0&&c%2==0&&d%2==0)
            {
                printf("Even");
            }
            else if(b%2!=0&&c%2!=0&&d%2!=0)
            {
                printf("Odd");
            }
            else 
            {
                printf("Mixed");
            }
}