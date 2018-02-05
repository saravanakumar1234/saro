#include<stdio.h>
void main()
{
char a[100]="abc123@$";
int i,count=0;
clrscr();
for(i=0;a[i]!='\0';i++)
{
if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
{
else if((a[i]>='0' && a[i]<='9'))
{
printf("no special character");
}
else
{
count++;}}
printf("special character %d",count);
}
getch();
}
