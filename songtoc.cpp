#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,n[5000],kt=0;
	scanf("%d",&a);
	if(a<2)
		printf("kh la so nguyen to");
	else
	{
		for(i=2;i<=sqrt(a);i++)
	{
		
		if(a%i==0){
		kt=0;
		printf("kkong phai so nguyen to");	
		break;}
		else{
		kt=1;
		printf("la so nguyen to ");}
	}
	return 0;
	}
	
}
