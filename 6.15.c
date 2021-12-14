#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMROWS 12
#define FIRST_CHAR 'A'
#define LAST_CHAR 'J'


int main()
{   
    for(int a = 0; a < NUMROWS; a++)
    {
        for(int b = FIRST_CHAR + a; b < FIRST_CHAR + NUMROWS; b++)
            printf("%c ", b);
        printf("\n");
    }

    return 0;
}