#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      c=a+b;
    if(c==n)
    {
        count++;
        break;
    }
    a=b;
      b=c;
    }
    if(count==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}