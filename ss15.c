#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=1;j<=n;j++)
		{
			if(j<=n-i)
			printf(" ");
			else
			printf("%d",k++);
		}
		printf("\n");
	}
	for(i=1;i<n;i++)
	{
		k=1;
		for(j=1;j<=n;j++)
		{
			if(j<=i)
			printf(" ");
			else
			printf("%d",k++);
		}
		printf("\n");
	}
	return 0;
}
