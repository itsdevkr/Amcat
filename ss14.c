#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		k=i;
		for(j=n;j>=0;j--)
		{
			if(j<=i)
			printf("%d",k--);
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
