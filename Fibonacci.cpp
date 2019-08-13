#include<iostream>
using namespace std;
int main()
{
	int n,a=-1,b=1,c,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		c=a+b;
		if(c<=n)
		{
			cout<<c<<" ";
			a=b;
			b=c;
		}
	}
	return 0;
}
