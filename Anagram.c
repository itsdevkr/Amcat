#include<stdio.h>
int ang(char s1[],char s2[])
{
	int one[26]={0},two[26]={0};
	int c=0;
	while(s1[c]!='\0')
	{
		one[s1[c]-'a']++;
		c++;
	}
	c=0;
	while(s2[c]!='\0')
	{
		two[s2[c]-'a']++;
		c++;
	}
	for(c=0;c<26;c++)
	{
		if(one[c]!=two[c])
		return 0;
	}
	return 1;
	
}
int main()
{
	char s1[50],s2[50];
	int flag=0;
	scanf("%s",s1);
	scanf("%s",s2);
	flag=ang(s1,s2);
	if(flag==0)
	printf("No");
	else
	printf("Yes");
	return 0;
}
