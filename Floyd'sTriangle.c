#include<stdio.h>
int main()
{
	int n,j,i,k=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		{
			if(j<=i)
				printf("%d ",k++);
			else
				printf(" ");	
		}
		printf("\n");
	}
	return 0;
}
