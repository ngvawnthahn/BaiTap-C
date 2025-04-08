#include<stdio.h>
int i,j,k;
int main()
{
	int a[2][3]={{2,4,5},{4,3,1}};
	int b[3][2]={{2,3},{3,4},{1,4}};
	int c[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{res=0;
		for(k=0;k<3;k++)
		{
		res += a[i][k]*b[k][j];
		}
		c[i][j]=res;
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++){
		printf(" %d",c[i][j]);
		}	printf("\n");
	}

}
