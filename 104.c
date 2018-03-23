#include<stdio.h>
void main()
{
int a,n,i,c=1;
printf("enter a and n value");
scanf("%d%d",&a,&n);
for(i=0;i<n;i++)
{
c=c*a;
}
printf("%d",c);
}
