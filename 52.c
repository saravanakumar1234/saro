#include<stdio.h>
void main()
{
int n,m,o;
printf("enter the values:");
scanf("%d%d",&n,&m);
o=n*m;
printf("%d",o);
if(o%2==0)
printf("even");
else
printf("odd");
}
