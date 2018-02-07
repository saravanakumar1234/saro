#include<stdio.h>
void main()
{
int s1[50],s2[50],i;
printf("\n enter the 1st string:");
scanf("%s",s1);
printf(" \n enter the second string");
scanf("%s",s2);
if(s1[i]<=s2[i])
{
printf("\n %s",s2);
}
else if(s1[i]>=s2[i])
{
printf("\n%s",s1);
}
else
{
printf("\n%s%s",s1,s2);
}
}
