#include<stdio.h>
int main()
{
    int i,x,y,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        if((x*2)>(y*5))
        {
            printf("Chocolate
");
        }
        else if((x*2)==(y*5))
        {
            printf("Either
");
        }
        else 
        {
            printf("Candy
");
        }
    }
}