#include<bits/stdc++.h>
using namespace std;
float x,d,t,g,h,z;
int a,b,c;
int main()
{
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	t=sqrt(d);
	if(d>0)
	{
		g=(-b+t)/(a*2);
		h=(-b-t)/(a*2);
		cout<<g<<h;
	}
	else if(d==0)
	{
		cout<<-b/(2*a);
	}
	else cout<<"pt vo nghiem";
	return 0;
}

