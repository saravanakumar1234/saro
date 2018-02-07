#include<stdio.h>
void main()
{
int n,i;
char s[100];
gets(s);
printf("enter the number of times:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n%s",s);
}
}
