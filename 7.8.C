#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> // islower(),
#include <stdbool.h>
#include <iso646.h> // and, or, not

#define PERIOD '.'

int main()
{   
    char text;
    int ch = 0, word = 0, line = 1;
    
    printf("Enter text : ");

    while ((text = getchar()) != PERIOD)
    {
        if (text == '\n')
            line++;
        if (text == ' ')
            word++;
        if (text != '\n' && text != ' ')
            ch++;
    }
    printf("Characters = %d, Words = %d, Lines = %d", ch, word, line);

    return 0;

    // int temp = (1 + 2) * (3 + 4);
    
    // printf("Before : %d\n", temp);

    // if (temp == 0 && (++temp == 1024))
    // {

    // };

    // printf("After : %d\n", temp);
}
