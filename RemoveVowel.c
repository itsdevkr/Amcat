#include<stdio.h>
int main()
{
	char s,str[30];
	int i;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		s=str[i];
		if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
		continue;
			printf("%c",s);
	}

	return 0;
}
