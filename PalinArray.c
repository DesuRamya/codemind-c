#include<stdio.h>
int main()
{
    int n,i,t,s=0,r,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    
    }
    for(i=0;i<n;i++)
    {
        t=a[i];
        while(t!=0)
        {
            r=t%10;
            s=s*10+r;
            t=t/10;
        }
        if(s==a[i])
        {
            c++;
        }
       s=0;
    }
       if(c==n)
       {
           printf("1");
       }
       else
       {
           printf("0");
       }
      }