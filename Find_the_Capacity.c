#include<stdio.h>
int main()
{
    int i,a[i],c=1;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        c=c*a[i];
    }
    printf("%dKB",c);
}