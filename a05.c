#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<=0;i++)
	for(j=0;j<n;j++)
	printf("*");
	printf("\n");
	
	for(i=2;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{	
		if(j==1 || j==n-i+1)
		printf("*");
		else
		printf(" ");
	}
	printf("\n");	
}
return 0;	
}
