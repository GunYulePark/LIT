#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define FACTORIAL_NUMBER    5

int main()
{
    unsigned long num = 10; // main에서 정의되면 밑에서 정의 안되도 되나?
    
    print_binary_loop(num);
    print_binary(num);

    printf("\n");

    return 0;
}