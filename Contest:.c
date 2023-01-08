#include<stdio.h>
int main()
{
    int x,y,z,a;
    scanf("%d%d%d",&x,&y,&z);
    a=2*z+1*y;
    if(x<=a)
    printf("Qualify");
    else
    printf("Not Qualify");
}