#include<stdio.h>
void main()
{
int a[10],n,i,sum=0;
printf("Enter the array size:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
for(i=0;i<n;i++)
	sum=sum+a[i];
printf("%d",sum);
}
