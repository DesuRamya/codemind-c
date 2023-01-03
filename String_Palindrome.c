#include<stdio.h>
#include<string.h>
int main()
{
  char s1[100],i,j;
  scanf("%s",s1);
   int n=strlen(s1);
   int count=0;
  for(i=0;i<n/2;i++)
  {
  	if(s1[i]!=s1[n-i-1])
			{
				count=1;
				break;
			}
	}
			if(count==1)
			{
				printf("Not Palindrome");
			}
			else
			{
				printf("Palindrome");
			}
}