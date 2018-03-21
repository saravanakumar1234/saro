#include<stdio.h>
void main()
{
int n[10],a,i;
printf("enter the numbers:");
scanf("%d",&a);
printf("enter the values:");
for(i=1;i<=a;i++)
scanf("%d",&n[i]);
for(i=1;i<=a;i++)
if(n[i]!=i)
printf("%d",i);
}
