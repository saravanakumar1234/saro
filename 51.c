#include<stdio.h>
void main()
{
	int i,p,q;
	printf("enter the value p and q");
	scanf("%d%d",&p,&q);
	printf("print the even number for the given range p to q:\n");
	for(i=p+1;i<q;i++)
	{
		if(i%2==0)
		printf("%d\n",i);
	}
}
