#include<stdio.h>
void main()
{
int i,n,ninja,opponent;
scanf("%d \n",&n);
for(i=0;i<n;i++)
{
scanf("%d %d",&ninja,&opponent);
if(opponent>ninja)
printf("%d\n",opponent-ninja);
else
printf("%d\n",ninja-opponent);
}
}
