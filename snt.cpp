#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[50000],i;
	cin>>n;
	bool kt=0;
	if(n<2) cout<<"kh la so ngto";
	else{
	for(i=2;i*i<n;i++)
	{
		if(n%i==0) {kt=1;cout<<"ko p so ngto";return 0;} //cout <<"kh la so ngto";
	 //cout<<"la so ngto";
	}
	if(kt==0) cout <<"la so ngto";
}
	return 0;
}
