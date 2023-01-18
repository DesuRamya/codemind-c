#include<stdio.h>
int main()
{
    int a1,a2,a3,b1,b2,b3,c,d,t1,t2;
    scanf("%d%d%d%d%d%d%d%d",&d,&c,&a1,&a2,&a3,&b1,&b2,&b3);
    t1=a1+a2+a3;
    t2=b1+b2+b3;
    if(t1<=150&&t2<=150)
    {
        printf("NO");
    }
    else if(t1>=150&&t2>=150)
    {
        if(c<(2*d))
        printf("YES");
        else
        printf("NO");
    }
    else
    {
        if(c<d)
        printf("YES");
        else
        printf("NO");
    }
}