#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,t,sq,c=0;
	cin>>n;
	t=n;
	while(t>0)
	{
		int r=t%10;
		c++;
		t/=10;
	}
	sq=n*n;
	int m=pow(10,c);
//	cout<<m;
	int k=sq%(m);
//	cout<<k;
	if(k==n)
	cout<<"yes";
	else
	cout<<"No";
	return 0;
}
