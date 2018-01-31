#include<stdio.h>
int main() 
{
	int a[20],i,j,n;
printf("enter the number of values");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0+1;i<n;i++)
{
if(a[0]<a[i])
{
a[0]=a[i];
}
}
printf("the largest element  of an array is %d",a[0]);
return 0;
}
