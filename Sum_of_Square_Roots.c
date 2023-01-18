#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,s=0,d,i;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
        d=sqrt(i);
        s=s+d;
    }
    printf("%.2f",s);
}