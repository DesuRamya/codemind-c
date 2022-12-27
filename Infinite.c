#include<stdio.h>
int main()
{
    int i,n,a[100];
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==-1)
        break;
        n=a[i]*a[i];
        printf("%d
",n);
    }
    
}