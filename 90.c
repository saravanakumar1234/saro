#include<stdio.h>
#include<string.h>
void main()
{
char a[10];
int i,n;
printf("enter the string:\n");
scanf("%s",&a);
n=strlen(a);
for(i=0;i<n;i++)
if(a[i]>='0'&&a[i]<='9')
printf("%c",a[i]);
}
