#include<stdio.h>
int main()
{
	long long i,a;
	scanf("%lld",&a);
	for(i=1;i<=a;i++){
	if(a%i==0)
	printf("%lld\n",i);}
	return 0;
}
