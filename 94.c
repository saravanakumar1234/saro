#include<stdio.h>
void main()
{
int a,b,n[10],i;
printf("enter the values:");
scanf("%d",&a);
printf("enter the digit:");
scanf("%d",&b);
printf("enter the N digit:");
for(i=0;i<a;i++)
scanf("%d",&n[i]);
printf("the value is %d",n[b-1]);
}
