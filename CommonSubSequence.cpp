#include<bits/stdc++.h>
using namespace std;
int count_common_subsequence(string s1,string s2)
{
	int n1,n2;
	n1=s1.length();
	n2=s2.length();
	int A[n1+1][n2+1];
	for(int i=0;i<=n1;i++)
	{
		for(int j=0;j<=n2;j++)
		{
			A[i][j]=0;
		}
	}
	for(int i=1;i<=n1;i++)
	{
		for(int j=1;j<=n2;j++)
		{
			if(s1[i-1]==s2[j-1])
			{
				A[i][j]=1+A[i-1][j]+A[i][j-1];
			}
			else
			{
				A[i][j]=A[i-1][j]+A[i][j-1]-A[i-1][j-1];
			}
		}
	}
	return A[n1][n2];
}
int main()
{
	string s1;
	string s2;
	cout<<"\nEnter string 1:";
	cin>>s1;
	cout<<"\nEnter string 2:";
	cin>>s2;
	cout<<"\nCount of common subsequence of two strings:"<<count_common_subsequence(s1,s2)<<endl;
	return 0;
}
