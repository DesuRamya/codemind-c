#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int z=y*30;
    if(z<=x)
    printf("YES");
    else 
    printf("NO");
}