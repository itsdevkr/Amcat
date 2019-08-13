#include<stdio.h>
#include<math.h>
main()
{
	int bin,i=0,s=0;
	scanf("%d",&bin);
	while(bin){
		s=s+pow(2,i)*(bin%10);
		bin=bin/10;
		i++;
	}
	printf("%d",s);
}
