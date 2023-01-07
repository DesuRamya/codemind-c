#include<stdio.h>
int main()
{
    int a,b,c,d,e,avg;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    if(avg>=90)
    printf("Grade A");
    else if(avg<90&&avg>=80)
    printf("Grade B");
    else if(avg<80&&avg>=70)
    printf("Grade C");
    else if(avg<70&&avg>=60)
    printf("Grade D");
    else if(avg<60&&avg>=40)
    printf("Grade E");
    else if(avg<40)
    printf("Grade F");

}