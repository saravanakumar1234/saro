#include<stdio.h>
void main()
{
int n,r,product=1;
scanf("%d",&n);
while(n!=0)
{
r=n%10;
product=product*r;
n=n/10;
}
printf("%d",product);
}
