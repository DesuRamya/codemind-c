#include<stdio.h>
int main()
{
    int n,i;
    float b;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        b=(float)n/i;
        if(b==i)
        {
            printf("True");
            return 0;
        }
    }
        {
            printf("False");
        }
}