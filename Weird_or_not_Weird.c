#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        if(a>=2&&a<=5)
        printf("not weird");
        else if(a>20)
        {
            printf("not weird");
        }
        else
        printf("weird");
    }
    else
    printf("weird");
}