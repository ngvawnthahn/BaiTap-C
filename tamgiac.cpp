#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	if(a<b+c||b<a+c||c<a+b)
	{
		if(a*a==b*b+c*c||a*a+b*b==c*c||b*b==a*a+c*c)
		{
			if(b==c||a==c||b==c)
			cout<<"tam giac vuong can";
			else cout<<"tam giac vuong";
		}
		else if(a==b||a==c||c==b)
		
		{
		  if(a==b&&b==c)
		cout<<"tam giac deu";
		else cout<<"tam giac can";
	}
		else cout<<"tam giac";
	}
	return 0;
}
