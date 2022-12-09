#include<stdio.h>
int main()
{
    int a,b;
    float avg;
    scanf("%d%d",&a,&b);
    avg=(a+b)/2.0;
    printf("Average of %d and %d is: %.2f",a,b,avg);
}