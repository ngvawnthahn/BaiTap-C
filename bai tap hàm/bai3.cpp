#include<stdio.h>
int fibo(int n)
{
	if(n==0) 
	return 0;
	if(n==1) 
	return 1;
	if(n>1) 
	return fibo(n-2)+fibo(n-1); 
}
int main()
{
	int n;
	printf("nhap so fibonaci thu:");
	scanf("%d",&n);
	int m=fibo(n);
	printf("so fibonaci thu %d la:%d",n,m);
	return 0;
}
