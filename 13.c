#include <stdio.h>
void main()
{
int b, d, flag = 0;
printf("Enter a positive integer: ");
scanf("%d",&b);
for(d=2; d<=b/2; ++d)
{
if(b%d==0)
{
 flag=1;
 break;
 }
}
if (flag==0)
printf("%d is a prime number.",n);
else
printf("%d is not a prime number.",n);
}
