#include<stdio.h>
int main()
{
    float bs,gs;
    scanf("%f",&bs);
    if(bs<=10000)
    printf("%.2f",bs+(0.8*bs)+(0.2*bs));
    else if(bs>10000&&bs<=20000){
    printf("%.2f",bs+(0.9*bs)+(0.25*bs));
    }
    else if(bs>20000){
    printf("%.2f",bs+(0.95*bs)+(0.3*bs));
    }
}