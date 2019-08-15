#include<stdio.h>
int main()
{
	char str[100],s;
	int i;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		s=str[i];
		if(s=='('||s==')')
		continue;
		printf("%c",s);
	}
	return 0;
}
