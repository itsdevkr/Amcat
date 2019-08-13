#include<iostream>
#include<math.h>
using namespace std;
int fact(int n)
{
	if(n<=1)
	return n;
	else
	return n*fact(n-1);
}
int main()
{
	int n,s=0,c=0,rem;
	cin>>n;
	int temp=n;
	int t=temp;
	while(temp>0)
	{
		int r = temp%10;
		s=s+fact(r);
		temp=temp/10;
	}
//	cout<<s;
	if(s==n)
	cout<<"Yes";
	else
	cout<<"No";
	/*while(t>0)
	{
		rem = t%10;
		s=s+pow(rem,c);
		t=t/10;
	}
	if(s==n)
	printf("yes");
	else
	printf("No");
	*/return 0; 
}
