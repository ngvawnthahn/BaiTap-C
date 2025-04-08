#include<stdio.h>
int luy_thua(int x,int y)
{	int res=1;
	for(int i=1;i<=y;i++)
	{
		res *= x;
	}
	return res;
}
int main()
{
	int x,y;
	printf("nhap vao lan luot gia tri x và y:");
	scanf("%d %d",&x,&y);
	int r=luy_thua(x,y);
	printf("ket qua cua x mu y là:%d",r);
}
