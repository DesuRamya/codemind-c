#include<stdio.h>
int main()
{
  int u;
  float c,s,tb,b;
  scanf("%d",&u);
  if(u<200)
  c=1.20;
  else if(u>=200&&u<400){
  c=1.50;
  }
  else if(u>=400&&u<600){
  c=1.80;
  }
  else if(u>=600){
  c=2.00;
  }
  b=u*c;
  if(b>=400)
  s=0.15*b;
  else if(b<400){
  s=100;
  }
  tb=b+s;
  printf("%.2f",tb);
}