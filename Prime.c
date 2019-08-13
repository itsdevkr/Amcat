#include<stdio.h>
int main()
{
	int n,flag=0,i;
	
	scanf("%d",&n);
	if(n==2)
	flag=1;
	if(n==3)
	flag=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
		else
		flag=1;
	}
	if(flag==1)
	printf("Prime");
	else
	printf("Not Prime");
	return 0;
}
