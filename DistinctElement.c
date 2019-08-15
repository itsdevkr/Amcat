#include<stdio.h>
void distinct(int A[],int n);
int main()
{
	int n,i,A[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	distinct(A,n);
	return 0;
}
void distinct(int A[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(A[i]==A[j])
			break;	
		}
		if(i==j)
		printf("%d ",A[i]);
		
	}
}
