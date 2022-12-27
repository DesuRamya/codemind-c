#include<stdio.h>
int main()
{
    int u;
    float c,b,s,ta;
    scanf("%d",&u);
    printf("Units Consumed: %d
",u);
    if(u<=199)
    c=1.20;
    else if(u>=200&&u<400){
        c=1.40;
    }
    else if(u>=400&&u<600){
        c=1.60;
    }
    else if(u>=600&&u<800){
        c=1.80;
    }
    else if(u>=800){
        c=2.00;
    }
    printf("Cost per Unit: %.2f
",c);
    b=c*u;
    printf("Bill: %.2f
",b);
    if(b<400)
    s=0;
    else 
    s=0.15*b;
    ta=b+s;
    printf("Surcharge: %.2f
",s);
    printf("Total Amount: %.2f
",ta);
}