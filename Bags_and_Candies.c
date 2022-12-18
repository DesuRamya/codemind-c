#include<stdio.h>
int main()
{
    int n,k,m,b;
    scanf("%d%d%d",&n,&k,&m);
    b=n/(k*m);
    if(n%(k*m)==0)
    {
        printf("%d",b);
    }
    else 
    {
        printf("%d",b+1);
    }
    
}