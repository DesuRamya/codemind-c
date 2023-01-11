#include<stdio.h>
int main()
{
    int n;
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
}//patterns new 3 5



