#include<iostream>
using namespace std;
int reverse(int);
int main()
{
	int n,r,s=0;
	cin>>n;
	cout<<reverse(n);
	return 0;
}
int r,sum=0;
int reverse(int x)
{
	if(x>0)
	{
		r=x%10;
		sum=sum*10+r;
		reverse(x/10);
	}
	else
		return sum;
	return sum;	
}
