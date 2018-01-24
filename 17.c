#include <stdio.h>
#include <math.h>

void main()
{
    int a, temp, remainder, result = 0, n = 0 ;

    printf("Enter an integer: ");
    scanf("%d", &a);

     temp = a;
    
    while (temp != 0)
    {
        temp /= 10;
        ++n;
    }

    temp = a;

    while (temp != 0)
    {
        remainder = temp%10;
        result += pow(remainder, n);
        temp/= 10;
    }
 if(result == a)
        printf("%d is an Armstrong number.", a);
    else
        printf("%d is not an Armstrong number.", a);

    
}
