#include<stdio.h>
int i,j;
int main()
{
	int a[2][3]={{3,2,4},{5,8,6}};
	int b[2][3]={{3,4,5},{7,7,3}};
	printf("tong cua 2 ma tran la:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]+b[i][j]);
		}printf("\n");
	}
}
