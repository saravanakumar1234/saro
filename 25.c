#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,m,a=[i],a[j];
printf(enter the element");
scanf("m",%d);
printf("enter the number");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[i]=t;
}
printf("median element",a[m/2]);
}
}
}
return 0;
}
