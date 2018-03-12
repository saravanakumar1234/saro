#include<stdio.h>
#include<string.h>
void main()
{
	char r[50];
	int i,len;
	printf("enter the string\n");
	scanf("%s",r);
	len=strlen(r);
	for(i=0;i<len;i=i+2)
	printf("%c",r[i]);
	for(i=1;i<len;i=i+2)
		printf("%c",r[i]);
}
	
