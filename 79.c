#include<stdio.h>
void main()
{
    int n,s,r,i,flag=0;
    printf("enter the n,s");
    scanf("%d%d",&n,&s);
    r=n*s;
     for(i=1;i<=r/2;i++)
     {
    if(i*i==r)
    {
flag=1;
break;
}
}
if(flag==1)
printf(" it is a square");
else
printf(" not square");
}
