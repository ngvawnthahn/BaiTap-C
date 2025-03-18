#include<stdio.h>
int main()
{
	int n,i;
	printf("nhap vào so phan tu:");
	scanf("%d",&n);
    int a[n];
    for( i=1;i<=n;i++)
    {
    	printf("nhap vao phan tu thu %d la:",i);
    	scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]<0)
		a[i]=0;
		printf("%d ",a[i]);
	}
}
