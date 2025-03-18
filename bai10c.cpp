#include<stdio.h>
int main()
{
	long long n,i,a=1,b=1,c=a+b;
	scanf("%lld",&n);
	while(c<=n)
	{
		c=a+b;
		a=b;
		b=c;
	}
	printf("%lld",c);
	
}
