#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c,a=0,b=1;
    scanf("%d",&n);
    for(i=0;i<n-2;i++)
    {
    	c=a+b;
    	a=b;
    	b=c;
    	if(c>n)
    	{
    		if(abs(n-c)==abs(n-a))
    		{
    			printf("%d %d",a,c);
    			break;
			}
			else if(abs(n-c)>abs(n-a))
			{
				printf("%d",a);
				break;
			}
			else
			{
			    printf("%d",c);
				break;
			}
		}
	}
}