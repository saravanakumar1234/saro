#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int i,length,n;
	printf("\n enter the string");
	scanf("%s",&str);
	printf("\n enter the number:\n");
	scanf("%d",&n);
	length=strlen(str);
	for(i=n;i<=length;i++)
		printf("%c",str[i]);
    }
