#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,K,a[50001],i,j,d=0;
	cin>>N>>K;
	for(i=0;i<N;i++) cin>>a[i];
	
	for(i=0;i<N-1;i++){
	
	for(j=i+1;j<N;j++){
	
	if(a[i]/2+a[j]/2==K){
	
	d++; 
	cout<<d<<"-"<<a[i]<<" ";
	
	 }
	}}
	cout<<d;
	return 0;
}
