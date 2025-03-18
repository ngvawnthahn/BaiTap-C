#include<stdio.h>
int main()
{
	long long a,b,c,d;
	scanf("%lld %lld",&a,&b);
	c=a*b;
	long long i=a%b;
	while(b!=0){
		i=a%b;
		a=b;
		b=i;
	}
	d=c/a;
	printf("uoc chung lon nhat là %lld\n",a);
	printf("boi chung nho nhat là %lld",d);
}
