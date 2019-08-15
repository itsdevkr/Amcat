#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cin>>r>>c;
	int A[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>A[i][j];
		}
	}
	for(j=0;j<r;j++)
	{
		for(i=0;i<c;i++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
