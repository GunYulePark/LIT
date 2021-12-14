#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void printBuffer();

int main()
{
    char c;
    while((c = getchar()) != '\n')
    {
        printf("%c\n", c);
        printBuffer();
    }
    printf("Hello World");

    return 0;
}