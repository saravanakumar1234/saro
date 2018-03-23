#include<stdio.h>
void main()
{
int n,num;
printf("enter the number\n");
scanf("%d",&n);
while(n>0)
{
num=n/2;
printf("%d",num);
  n=n/2;
}
}
