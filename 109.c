#include<stdio.h>
void main()
{
int min,i,a[50];
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<10;i++)
{
if(a[i]<min)
min=a[i];
}
printf("%d",min);
}
