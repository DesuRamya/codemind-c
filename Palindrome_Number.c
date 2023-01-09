#include<stdio.h>
int main()
{
    int n,s=0,r,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       int temp=a[i];
       s=0;
        while(a[i]>0)
        {
            r=a[i]%10;
            a[i]=a[i]/10;
            s=s*10+r;
        }
        if(temp==s)
        {
        printf("True
");
        }
        else 
        {
        printf("False
");
        }
    }
}