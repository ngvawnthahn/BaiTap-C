#include<bits/stdc++.h>
using namespace std;
int  C(int n,int k){
	if(n==k||k==0){
		return 1;
	}
	else{
		return C(n-1,k-1)+C(n-1,k);
	}
	}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<C(n,k)<<endl;
	return 0;
}
	
