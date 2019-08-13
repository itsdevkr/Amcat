#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
	cin>>n;
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(s>n)
	cout<<"yes";
	else
	cout<<"No";
	return 0;
}
