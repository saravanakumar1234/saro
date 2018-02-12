#include<stdio.h>
void main()
{
int a,b,sum=0;;
printf("enter the number");
scanf("%d",&b);
while(b!=0)
{
a=b%10;
b=b/10;
sum=sum+a;
}
printf("%d",sum);
}
