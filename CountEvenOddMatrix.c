#include<stdio.h>
int main()
{
	int m,n,i,j,odd=0,even=0;
	
	scanf("%d%d",&m,&n);
	int A[m][n];
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&A[i][j]);
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	if(A[i][j]%2==0)
	even++;
	else
	odd++;
	printf("%d%d",even,odd);
	return 0;
}
