#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=1;j<=(2*n-1)/2;j++)
		{
			if(j>n-i && j<n+i)
			printf("%d",k++);
			else
			printf(" ");
		}
		for(j=((2*n-1)/2)+1;j<=(2*n-1);j++)
		{
			if(j>n-i && j<n+i)
			printf("%d",k--);
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
