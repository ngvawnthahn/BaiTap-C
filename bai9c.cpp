#include<stdio.h>
int main()
{
	float a=1,sum=0,i,b;
	int n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a *= 1.0/i;
		sum +=a;
	}
	printf("%f",sum);
	return 0;
}
