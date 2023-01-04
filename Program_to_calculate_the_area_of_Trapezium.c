#include<stdio.h>
int main()
{
    int a,b,h;
    float ar;
    scanf("%d%d%d",&a,&b,&h);
    ar=0.5*(a+b)*h;
    printf("%.4f",ar);
}