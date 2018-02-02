#include<stdio.h>
int main()
{
int i,j,b[100],n,temp;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(b[i]>b[j])
{
temp=b[i];
b[i]=b[j];
b[j]=temp;
}
}
for(i=0;i<n;i++)
{
printf("%d",b[i]);
}
getch();
}
