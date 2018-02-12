#include<stdio.h>
void main()
{
int a=0,b=1,n=5,s,i;
for(i=0;i<n;i++)
{
	printf("%d\n",a);
s=a+b;
a=b;
b=s;
}
printf("%d\n",s);
}
