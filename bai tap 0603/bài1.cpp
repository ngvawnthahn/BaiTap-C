#include<stdio.h>
int main()
{
	int n;
	printf("nhap so phan tu:");
	scanf("%d",&n);
	int a[n];
	for(int i=1;i<=n;i++)
	{
		printf("phan tu thu %d la:",i);
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
}
