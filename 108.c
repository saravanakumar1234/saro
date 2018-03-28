#include<stdio.h>
void main()
{
    int A,B,C,sum=0,i;
    printf("enter the values:");
    scanf("%d %d %d",&A,&B,&C);
    for(i=A;i<=C;i++)
    {
        sum=sum+A;
        A=A+B;
    }
    printf("sum is %d",sum);
}
