#include <stdio.h>
void main()
{
int m,n;
printf("enter the values: \n");
scanf("%d",&m);
while(m!=0)
{
n=m%10;
if(m%2!=0)
printf("%d \n",n);
m=m/10;
}
}
