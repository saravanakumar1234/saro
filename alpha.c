#include <stdio.h>
void main()
{
char c;
clrscr();
printf("Enter a character");
scanf("%c",&c);
if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
printf("It is an alphabet");
else
printf("It is not an alphabet");
getch();
}
