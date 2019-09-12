#include<stdio.h>
int main()
{
	int no,i,j,n,k;
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		for(k=0;k<no-i;k++)
		{
			printf(" ");
		}
		n=1;
		for(j=0;j<=i;j++)
		{
			printf(" %d",n);
			n=n*(i-j)/(j+1);
		}
		printf("\n");
	}
	return 0;
}
