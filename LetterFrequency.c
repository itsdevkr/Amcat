#include<stdio.h>
int main()
{
	char s[30],l;
	scanf("%s",s);
	int A[26],i,k;
	for(i=0;i<26;i++)
	A[i]=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			k=s[i]-97;
			A[k]=A[k]+1;
		}
	}
	for(i=0;i<26;i++)
	{
		if(A[i]>0)
		{
			l=97+i;
			printf("Letter %c frequency %d\n",l,A[i]);
		}
	}
	//printf("%d",A[i]);
	return 0;
}
