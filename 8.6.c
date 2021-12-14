#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Whether_num(long input);

int main()
{   
    long input;
    printf("Please input an integer and press enter.\n");

    while (1)
        Whether_num(input);
    
    return 0;
}

void Whether_num(long input)
{
    char c;

    while (scanf("%ld", &input) != 1)
    {
        if (input == 'q')
            break;
        
        printf("Your input - ");

        while ((c = getchar()) != '\n')
            putchar(c);

        printf(" - is not an integer. Please try ajain.\n");
    }

    printf("Your input %ld is an integer. Thank you.\n", input);
}
