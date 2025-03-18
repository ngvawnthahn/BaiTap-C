#include<stdio.h>
int main()
{
	int i,n,x,s=0;
	printf("nhap vao so phan tu cua mang:");
	scanf("%d",&n);
	printf("nhap vao so x:");
	scanf("%d",&x);
	int a[n];
	for(i=1;i<=n;i++)
	{
		printf("nhap vao phan tu thu %d:",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(x==a[i])
		s+=1;}
	printf("x xuat hien %d lan:",s);
}
