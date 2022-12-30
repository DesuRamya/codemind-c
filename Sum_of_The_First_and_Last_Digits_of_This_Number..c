#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,s=0,d,p,l,f;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
       d=log10(n)+1;
       p=pow(10,d-1);  
       l=n%10;
       f=n/p;
       s=l+f;
       printf("%d
",s);
    }
}