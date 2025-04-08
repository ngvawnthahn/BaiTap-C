#include<stdio.h>
int giai_thua(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return n*giai_thua(n-1);
}
int main()
{
	int n,gt;
	printf("nhap vao so n:");
	scanf("%d",&n);if(n>=0)
	{
	
	gt=giai_thua(n);
	
	printf("%d!=%d",n,gt);}
	else
	printf("loi gia tri");
}
