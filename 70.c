#include<stdio.h>
int main(void)
{
int n,count=0,a=1,p=2;
scanf("%d",&n);
while(n!=1)
{
n=n/2;
count++;
}
for(int i=0;i<count+1;i++)
{
a=a*p;
}
printf("%d",a);
return 0;
}
