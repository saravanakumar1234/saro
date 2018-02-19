#include<stdio.h>
void main()
{
int n[10];
int max,i;
printf("enter the values:");
for(i=0;i<=10;i++)
scanf("%d",&n[i]);
max = n[0];
for(i=0;i<=10;i++)
if(n[i]>max)
max=n[i];
printf("%d",max);
}
