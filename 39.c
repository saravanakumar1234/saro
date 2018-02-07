#include<stdio.h>
#define SIZE 50
int main()
{
int ar[SIZE];
int i,size,min,max;
printf("enter the size of the array");
scanf("%d",&size);
printf("Enter the elements to be entered in the array");
for(i=0;i<size;i++)
{
scanf("%d",&ar[i]);
}
max=ar[0];
for(i=0;i<size;i++)
{
if(max<ar[i])
{
max=ar[i];
}
}
printf("The maximum element is: %d",max);
return 0;
 }
