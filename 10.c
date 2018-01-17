#include <stdio.h>
#include <math.h>
#include <limits.h>

#define DIGITS_TO_REMOVE 3 

int recurse(int* foo, int begin, int end, int previous, int max)
{
    int i;
    int min = begin;

    for (i = begin; i <= end; ++i)
    {
        if (foo[min] > foo[i])
        {
            min = i;
        }
    }

    return previous * pow(10, max - end + 1) + (max > end ? recurse(foo, min + 1, end + 1, foo[min], max) : foo[min]);
}

int main(void) 
{
    int foo[(const int)ceil(log10(INT_MAX))];
    int bar = 24567; 
    int size = ceil(log10(bar));
    int i;
    int min = size - DIGITS_TO_REMOVE;

    for (i = 1; bar > 0; bar /= 10, ++i){
        foo[size - i] = bar % 10;

        if (i >= DIGITS_TO_REMOVE && foo[size - i] <= foo[min]){
            min = size - i;
        }
    }

    printf("%d", recurse(foo, min + 1, DIGITS_TO_REMOVE + 1, foo[min], size - 1));
    return 0;
}
