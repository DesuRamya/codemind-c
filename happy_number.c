#include<stdio.h>
int main()
{
    int n,i,x,s=0;
    scanf("%d",&n);
    i=n;
    while(i>9)
    {
        s=0;
        while(i!=0)
        {
            x=i%10;
            s=s+x*x;
            i=i/10;
        }
        if(s>9)
        i=s;
    }
    if(s==1||s==7)
    printf("True");
    else
    printf("False");
}