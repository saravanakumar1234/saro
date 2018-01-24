#include <stdio.h>
 void main()
{
   int n, rev = 0, temp;
   printf("Enter a number:\n");
   scanf("%d",&n);
   temp = n;
   while( temp != 0 )
   {
      rev = rev * 10;
      rev = rev + temp%10;
      temp = temp/10;
   }
   if ( n == rev )
      printf("the number is palindrome\n");
   else
      printf("not a palindrome\n");
   
}
