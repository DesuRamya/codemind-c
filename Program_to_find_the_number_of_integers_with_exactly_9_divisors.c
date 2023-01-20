#include<stdio.h>
int main()
{
    int i,j,n,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int r=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            r++;
        }
        if(r==9)
        {
            c++;
            printf("%d ",i);
        }
    }
    printf("
");
    printf("Total=%d",c);
}