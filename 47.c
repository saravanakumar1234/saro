#include<stdio.h>
int main()
{
int a[20],i,j,n,t;
printf("enter the number of values");
scanf("%d",&n);
printf("enter the values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}   
}
printf("sorted elements are:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("%d is the lowest number",a[0]);
printf("%d is the largest number",a[n-1]);
return 0;
}
