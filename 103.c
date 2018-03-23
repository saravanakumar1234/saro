#include <stdio.h>
#include<string.h>
void  main() 

{
	char s[50];
	int i;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(i==0)
			s[i]=toupper(s[i]);
		if(s[i]==' ')
			s[i+1]=toupper(s[i+1]);
	}
	printf("\n%s",s);
}
