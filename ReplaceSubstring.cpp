#include<iostream>
using namespace std;
int main()
{
	string str,str2,str3;
	cout<<"Enter the main String:";
	cin>>str;
	cout<<"Enter the string to be replaced:";
	cin>>str2;
	int str2len=str2.length();
	cout<<"Enter the replacing string:";
	cin>>str3;
	str.replace(str.find(str2),str2.size(),str3);
	cout<<str;
	return 0;
}
