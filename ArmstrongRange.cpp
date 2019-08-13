#include<iostream>
#include<math.h>
using namespace std;
void armstrong(int n)
{
	int s=0,c=0,rem;
	int temp=n;
	int t=temp;
	while(temp>0)
	{
		int r = temp%10;
		c++;
		temp=temp/10;
	}
	while(t>0)
	{
		rem = t%10;
		s=s+pow(rem,c);
		t=t/10;
	}
	if(s==n)
	{//printf("yes");
	printf("%d ",n);}
	//else
	//printf("No");
}
int main()
{
	int m,n,i;
	cin>>m>>n;
	for(i=m;i<=n;i++)
	armstrong(i);
	/*int temp=n;
	int t=temp;
	while(temp>0)
	{
		int r = temp%10;
		c++;
		temp=temp/10;
	}
	while(t>0)
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
