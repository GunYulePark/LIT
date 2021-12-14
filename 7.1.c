#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{   
    int number;

    printf("Input a positive integer : ");
    scanf("%d", &number);

    if(number % 2 == 0)
        printf("even");
    if(number % 2 == 1)
        printf("odd");
    else printf("wrong number");

    return 0;
}

