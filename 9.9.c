#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "includes/my_print_functions.c"
#define FACTORIAL_NUMBER    5

int main()
{
    void print_binary(unsigned long num);
    void print_binary_loop(unsigned long num);


    unsigned long num = 10; // main에서 정의되면 밑에서 정의 안되도 되나?
    
    print_binary_loop(num);
    print_binary(num);

    printf("\n");

    return 0;
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

// void print_binary_loop(unsigned long num)
// {
//     while (1)
//     {
//         int quotient = num / 2;
//         int remainder = num % 2;

//         printf("%d", remainder);

//         num = quotient;

//         if (num == 0) break;
//     }   

//     printf("\n");
// }

// // void print_binary(unsigned long n)
// // {
// //     if (n >= 0)
// //         printf("%d", print_binary(n) % 2);
// // }

// void print_binary(unsigned long num)
// {
//     int remainder = num % 2;
    
//     if (num >= 2)
//         print_binary(num / 2);

//     printf("%d", remainder); // 줄어가면서 출력

//     return;
// }
