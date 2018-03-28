#include<stdio.h>
void main()
{
int n,k,i;
int a[100],c=0;
printf("enter n and k values:");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
c++;
}
if(c!=0)
printf("yes");
else
printf("no");
}
