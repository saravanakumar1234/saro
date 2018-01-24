#include <stdio.h>
int main()
{
	int a[5],i,k,t=0;
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		t=t+a[i];
	}
	printf("%d",t);
	return 0;
}
