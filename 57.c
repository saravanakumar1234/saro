#include <stdio.h>
void main()
{
	int c,d,temp;
	printf("enter the values:");
	scanf("%d%d",&c,&d);
	temp=c;
	c=d;
	d=temp;
	printf("swap of two numbers is %d %d",c,d);
}
