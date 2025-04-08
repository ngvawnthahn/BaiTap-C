#include<stdio.h>
int i,j;
int main()
{
	
	for ( i=0;i<3;i++)
	{int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
		for( j=0;j<3;j++){
		printf(" %d",a[i][j]);
		}printf("\n");
	}
	int a[3][3];
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++){
		printf("nhap phan tu cua mang o hang %d va cot %d:",i,j);
		scanf(" %d",&a[i][j]);
	}
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf(" %d",a[i][j]);
		}printf("\n");
	}
}
