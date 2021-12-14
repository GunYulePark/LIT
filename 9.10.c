#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int number);

int main()
{
    // fibonacci(1) = 1;
    // fibonacci(2) = 1;
    // printf("%d", fibonacci(10));
    for (int count = 1; count < 100; ++count)
        printf("%d ", fibonacci(count));
    
    return 0;
}
int fibonacci(int number)
{
    if (number > 2)
        return fibonacci(number - 1) + fibonacci(number - 2);
    else
        return 1;
}
// void print_binary_loop(unsigned long n)
// {
//     int rest, share;

//     rest = n;
//     while (rest > 0)
//     {
//         share = rest % 2;
//         printf("%d", share);
//         rest /= 2;
//     }
// }

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

// void print_binary(unsigned long n)
// {
//     if (n >= 0)
//         printf("%d", print_binary(n) % 2);
// }

void print_binary(unsigned long num)
{
    int remainder = num % 2;
    
    if (num >= 2)
        print_binary(num / 2);

    printf("%d", remainder); // 줄어가면서 출력

    return;
}
