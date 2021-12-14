#include "my_print_functions.h"

#include <stdio.h>

void print_binary_loop(unsigned long num)
{
    while (1)
    {
        int quotient = num / 2;
        int remainder = num % 2;

        printf("%d", remainder);

        num = quotient;

        if (num == 0) break;
    }   

    printf("\n");
}

void print_binary(unsigned long num)
{
    int remainder = num % 2;
    
    if (num >= 2)
        print_binary(num / 2);

    printf("%d", remainder); // 줄어가면서 출력

    return;
}
