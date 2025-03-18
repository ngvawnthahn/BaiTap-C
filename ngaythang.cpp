#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t>>n;
	if(t==1||t==3||t==5||t==7||t==8||t==10||t==12)
	cout <<"thang"<<t<<"nam"<<n<<"co 31 ngay";
	else if(t==4||t==6||t==9||t==11)
	cout <<"thang"<<t<<"nam"<<n<<"co 30 ngay";
	else 
	{
		if((n%400==0)||(n%4==0&&n%100!=0))
		cout<<"thang"<<t<<"nam"<<n<<"co 29 ngay";
		else cout<<"thang "<<t<<" nam "<<n<<"co 28 ngay";
	}
	return 0;
}
