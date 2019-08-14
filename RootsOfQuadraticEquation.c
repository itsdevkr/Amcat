#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,x,y;
	printf("Enter coefficient of ax^2, bx and c of equation:");
	scanf("%d%d%d",&a,&b,&c);
	int D = sqrt(b*b - 4*a*c);
	printf("%d",D);
	if(D<0)
	printf("Roots are imaginay");
	if(D==0)
	{printf("Roots are eual");
	x=b/2*a;
	printf("%d",x);}
	if(D>0)
	{printf("roots are distinct");
	x=(b+D)/2*a;
	y=(b-D)/2*a;
	printf("%d,%d",x,y);
	}return 0;
}
