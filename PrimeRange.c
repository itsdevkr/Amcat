#include<stdio.h>
/*int main()
{
	int n;
	scanf("%d",&n);
	prime(n);
	return 0;
}
int prime(int n)
{
	int flag=0,i;
	
	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
		flag=0;
		break;}
		else
		flag=1;
		
	}
	if(flag==1)
	printf("NP");
	else
	printf("P");
}*/


void primeRange(int n)
{
	int flag=0,i;
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
	{
		//printf("p");
		printf("%d ",n);
	}
	//else
	//printf("np");
}
int main()
{
	int n,m,i,flag=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	primeRange(i);
	/*if(n==2)
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
	printf("p");
	else
	printf("np");
	*/return 0;
}
