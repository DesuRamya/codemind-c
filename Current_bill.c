#include<stdio.h>
int main()
{
    float u;
    float b,tb,s,c;
    scanf("%f",&u);
    if(u<200)
    {
    c=1.20;
    }
    else if(u>=200&&u<400)
    {
    c=1.50;
    }
    else if(u>=400&&u<600)
    {
    c=1.80;
    }
    else if(u>=600)
    {
    c=2.00;
    }
    b=u*c;
    if(b<400)
    {
    s=100;
    }
    else 
    {
    s=0.15*b;
    }
    tb=s+b;
    {
    printf("%.2f",tb);
    }
    }