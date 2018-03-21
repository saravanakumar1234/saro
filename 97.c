#include<stdio.h>
void main()
{
int n,d,rev=0;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
d=n%10;
rev=(rev*10)+d;
n=n/10;
}
printf("reverse of the number is %d",rev);
}
