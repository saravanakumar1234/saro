#include<stdio.h>
void main()
{
int a,b,temp;
scanf("%d%d",&a,&b);
printf("before swapping numbers are %d %d",a,b);
temp=a;
a=b;
b=temp;
printf("after swapping numbers are %d %d",a,b);
}
