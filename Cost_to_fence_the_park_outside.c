#include<stdio.h>
int main()
{
    int l,b,w,c,cost,a,x;
    scanf("%d%d%d%d",&l,&b,&w,&cost);
    a=l*b;
    c=(l+(2*w))*(b+(2*w));
    
    x=(c-a)*cost;
    printf("%d",x);
}//cost to fence the park
