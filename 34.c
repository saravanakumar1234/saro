#include<stdio.h>
#include<string.h>
void main()
{
 char d[100];
 int count=0,i;
 printf("enter the string");
 scanf("%[^\n]d", &d);
 for(i=0;d[i]!='\0';i++)
 {
  if(d[i]==' ')
 {
 count++;
  }
}
  printf("%d",count);
}
