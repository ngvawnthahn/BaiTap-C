#include<stdio.h>
int main()
{
	int n,p=0,q=0,x=0;
	float z=0,v=0,y=0;
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
    int a[n];
	for(int i=1;i<=n;i++)
	{
		printf("phan tu thu %d la:",i);
		scanf("%d",&a[i]);
	}
	int s=0;
	int u=0;
	for(int i=1;i<=n;i++)
	{
		p+=a[i];
		z+=(a[i]*1.0/n);
		
		if(a[i]>0)
		{
			s+=1;
			x+=a[i];
		}
		if(a[i]<0)
		{
			u+=1;
			q+=a[i];
		}
		
	}
	y=x*1.0/s;
	v=q*1.0/u;
	printf("tong:%d \n",p);
	printf("tong duong:%d \n",x);
	printf("tong am:%d \n",q);
	printf("trung binh cong:%f \n",z);
	printf("trung binh cong duong:%f \n",y);
	printf("trung binh cong am:%f \n",v);
	return 0;
}
