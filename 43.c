#include<stdio.h>
int main()
{
int s1[100],s2[100],i,j;
printf("\n enter the 1st string:");
scanf("%s",s1);
printf("\n enter the second string");
scanf("%s",s2);
for(i=0;s1[i]!='\0';++i)
for(j=0;s2[j]!='\0';++j,++i)
{
s1[i]=s2[j];
}
printf("concatenation of two string is:%s%s",s1,s2);
return 0;
}                                                                                 
