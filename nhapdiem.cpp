#include<bits/stdc++.h>
using namespace std;
int main()
{
double n;
cin>>n;
switch(n)
{
case 1:
case 2:
case 3:
case 4:
    cout<<"yeu";
    break;
case 5:
case 6:
case 7:	
	cout<<"trung binh";
    break;
case 8:
	cout<<"kha";
	break;
default:
	if(n==9) cout<<"gioi";
	else
	cout<<"xx";
	break;
}

return 0;
}
