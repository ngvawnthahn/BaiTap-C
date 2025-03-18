#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int dem=0,n,a[50000],k,i;
	cin>>n>>k;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		if(a[i]<k) dem++;
	cout<<dem;
	return 0;
}
