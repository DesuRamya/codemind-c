#include<stdio.h>
int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&x,&y);
        if(x>y)
        {
            printf("LOSS");
        }
        else if(x==y)
        {
            printf("NEUTRAL");
        }
        else
        {
            printf("PROFIT");
        }
        printf("
");
    }
}