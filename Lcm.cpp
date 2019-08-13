#include<iostream>
using namespace std;
int main()
{
	int n1,n2,i;
	cin>>n1>>n2;
	for(i=n1>n2?n1:n2;i<=n1*n2;i=i+(n1>n2?n1:n2))
	{
		if(i%n1==0 && i%n2==0)
		break;
	}
	cout<<i;
	return 0;
}
