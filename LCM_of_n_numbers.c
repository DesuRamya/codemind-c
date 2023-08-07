#include<stdio.h>
long int lcm(long int a,long int b)
{
    long int max=a;
    if (a<b)
    max=b;
    long int l=max;
    while(1)
    {
        if (l%a==0 && l%b==0)
        return l;
        else
        l+=max;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    int ar[a],i;
    for(i=0;i<a;i++)
    scanf("%d",&ar[i]);
    long int l=lcm(ar[0],ar[1]);
    for(i=2;i<a;i++)
    l=lcm(l,ar[i]);
    printf("%ld",l);
}