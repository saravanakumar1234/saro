#include<stdio.h>
void main()
{
int i;
char a[10]="hello123";
if(((a[10]>='a' || a[10]<='z')||(a[10]>='A' || a[10]<='Z'))&&(a[10]>='0' || a[10]<='9'))
printf("yes\n");
else
printf("no\n");
}
