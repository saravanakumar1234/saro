#include<stdio.h>
void main()
{
int i,j,b[50],c,n;
scanf("%d",&n);
printf("enter the array values");
for(i=0;i<=n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(b[i]>b[j])
{
c=b[i];
b[i]=b[j];
b[j]=c;
}
}
}
printf(" sorted array is");
for(i=0;i<n;i++)
{
printf("%d  ",b[i]);
}
getch;
}
