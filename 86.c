#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	int i,n,flag=0;
	printf("enter the s");
	scanf("%s",&s);
	n=strlen(s);
	for(i=0;i<=n;i++)
	{
		if(s[i]==s[i+1])
		{
			flag=1;
		}
		break;
	}
if(flag==1)
printf("no");
else
printf("yes");
}
