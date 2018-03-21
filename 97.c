#include<stdio.h>
void main()
{
int a,d,rev=0;
printf("enter the number:");
scanf("%d",&a);
while(a!=0)
{
d=a%10;
rev=(rev*10)+d;
a=a/10;
}
printf("reverse of the number is %d",rev);
}
