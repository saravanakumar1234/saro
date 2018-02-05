#include<stdio.h>
void main()
{
int i,count;
char str[100];
printf("Enter the string:");
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='0'&& str[i]<='9')
{
count++;
}}
printf("%d",count);
}
