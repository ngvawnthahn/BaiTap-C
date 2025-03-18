#include <bits/stdc++.h>
using namespace std;
bool snt(int t)
{
	if(t<2)
	return false;
	else
	{
	for(int o=2;o*o<=t;o++)
	if(t%o==0){
	return false;}
	return true;
	}
}
int main()
{
	int i,n,k,a[50001],d=0;
	cin>>n>>k;
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
		if(a[i]<k)
		{
			if(snt(a[i])==1)
			d++;
		}
	}
	cout<<d;
}
