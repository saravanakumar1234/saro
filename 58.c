#include<stdio.h>
void main()
{
int m,n;
printf("enter the two numbers:");
scanf("%d%d",&m,&n);
printf("the values before swapping are%d %d :",n,m);
n^=m;
m^=n;
n^=m;
printf("the values after swapping are %d %d :",n,m);
}
