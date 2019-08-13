#include<iostream>
using namespace std;
int main()
{
	int n1,n2,i;
	cin>>n1>>n2;
	for(i=n1<n2?n1:n2;i>=1;i--)
	{
		if(n1%i==0 && n2%i==0)
		break;
	}
	cout<<i;
	return 0;
}
