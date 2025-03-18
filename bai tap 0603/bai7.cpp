#include<stdio.h>
int a,b,c;
int main()
{
	int n,i,j,min=9999999,r;
	printf("nhap vao so phan tu cua mang:");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=1;i<=n;i++)
	{
		printf("phan tu thu %d la:",i);
		scanf("%d",&a[i]);
		b[i]=a[i];
	}

	for(i=1;i<=n;i++)
	{	
		for(j=i;j<=n;j++)
			if(min>a[j])
			{printf("%d ",a[j]);
				min=a[j];
				r=j;
			}
		printf("\n");
		a[r]=b[i];
		a[i]=min;
		min=9999999;
	}printf("\n");
	for(i=1;i<=n;i++)
	printf("%d",a[i]);
	
}
