#include<stdio.h>
void main()
{
	int n,count=0;
	printf("\n enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count=count+1;
		
	}
	printf("\n %d",count);
}
