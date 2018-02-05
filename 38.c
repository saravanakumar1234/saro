#include<stdio.h>
void main()
{
int x,z;
printf("\nenter two numbers:");
scanf("%d%d",&x,&z);
printf("\nnumber before swapping are:%d%d",x,z);
x=x^z;
z=x^z;
x=x^z;
printf("\nnumbers after swapping:%d%d",x,z);
}
