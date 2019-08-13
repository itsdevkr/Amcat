#include<stdio.h>
int main()
{
	int A[5]={0,-1,2,-3,1},sum=-2,i,j,k;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			for(k=j+1;k<5;k++)
			{
				if(A[i]+A[j]+A[k]==sum)
				printf("{%d,%d,%d}",A[i],A[j],A[k]);
			}
			
		}
	}
	return 0;
}
