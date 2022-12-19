#include<stdio.h>
int main()
{
	int i,a,b,pro,gcd,lcm;
	scanf("%d%d",&a,&b);
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			gcd=i;
		}
	}
	pro=a*b;
	lcm=pro/gcd;
	printf("%d",lcm);
}//lcm
