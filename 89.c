#include<stdio.h>
#include<string.h>
void main()
{
char a[10];
int i,j,t,n;
printf("enter the string:\n");
scanf("%s",&a);
n=strlen(a);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
t=a[i];
a[i]=a[j];
a[j]=t;
}}
printf("%s",a);
}
