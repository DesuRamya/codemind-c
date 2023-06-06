#include<stdio.h>
int fact(int n)
{
    int p=1;
    if (n==0 || n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int i,a[100],n;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d
",fact(a[i]));
    }
}