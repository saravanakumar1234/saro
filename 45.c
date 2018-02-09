#include<stdio.h>
int main()
{
int b,j=0;
printf("enter the no.");
scanf("%d",&b);
while(b!=0)
{
b=b/10;
++j;
}
printf("%d",j);
return 0;
}
