#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> // islower(), isspace()
#include <stdbool.h>

#define STOP '.'

int main()
{   
    while(1)
    {
        char c = getchar();

        if (c == '.')
            break;
        putchar(c);
    }

    return 0;
}