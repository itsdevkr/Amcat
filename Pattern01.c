#include<stdio.h>
int main()
{
	int k,m,n,i,j,o;
	scanf("%d%d",&m,&n);
	for(i=0;i<n;i++)
	{
		k=m;
		for(j=0;j<n;j++)
		{
			if(j<=i)
			{
				printf("%d",k);
			}
			else
			printf(" ");
		}
		m++;
		printf("\n");
		
	}
	for(i=n-1;i>=0;i--)
	{
		o=k;
		for(j=0;j<i;j++)
		{
			printf("%d",k-1);
		}
		k--;
		printf("\n");
	}
	return 0;
}
