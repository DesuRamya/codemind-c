#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>(b+c))
    {
        if((a+b)>(c+a))
        printf("%d",a+b);
    }
        else if((b+c)>(c+a))
        {
        printf("%d",b+c);
        }
    else
    printf("%d",c+a);
}//hermoine and spells
