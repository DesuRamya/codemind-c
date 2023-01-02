#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,y,m,p,r;
    scanf("%d%d%d",&x,&y,&m);
    p=pow(x,y);
    r=p%m;
    printf("%d",r);
}