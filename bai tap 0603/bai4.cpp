#include<stdio.h>
int main()
{
	int n,i;
	printf("nhap v�o so phan tu:");
	scanf("%d",&n);
    int a[n];
    for( i=1;i<=n;i++)
    {
    	printf("nhap vao phan tu thu %d la:",i);
    	scanf("%d",&a[i]);
	}
	int max=a[1];
	int s;
	for( i=1;i<=n;i++)
	{
		if(max<=a[i])
		{
		max=a[i];
		s=i;}
	}
	printf("gia tri lon nhat l�:%d \n v� l� phan tu thu:%d \n",max,s);
	int min=a[1];
	int t;
	for (i=1;i<=n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			t=i;
		}
	}
	printf("gia tri nho nhat l�:%d \n v� l� phan tu thu:%d",min,t);
	return 0;
}
