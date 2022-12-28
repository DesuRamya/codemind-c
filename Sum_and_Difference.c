#include<stdio.h>
int main()
{
  int n1,n2,s1,d1;
  float m1,m2,s2,d2;
  scanf("%d%d%f%f",&n1,&n2,&m1,&m2);
  s1=n1+n2;
  d1=n1-n2;
  s2=m1+m2;
  d2=m1-m2;
  printf("%d %d
%0.1f %0.1f",s1,d1,s2,d2);
}//sumanddifference

