#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j;
	string str;
	cin>>str;
	int l=str.length();
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			if(str[i]>str[j])
			{
				char t=str[i];
				str[i]=str[j];
				str[j]=t;
			}
		}
	}
	cout<<str;
	return 0;
}
