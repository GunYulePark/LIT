#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> // islower(), isspace()
#include <stdbool.h>

#define STOP '.'

int main()
{   
    // int temp;
    // temp = true ? 1024 : 7;
    // printf("%d\n", temp);

    // temp = false ? 1024 : 7;
    // printf("%d\n", temp);

    int num;
    scanf("%d", &num);

    (num % 2 == 0) ? printf("Even") : printf("Odd");

    // const bool is_even = (num % 2 == 0) ? true : false;

    // if(is_even)
    //     printf("Even");
    // else
    //     printf("Odd");

    return 0;
}