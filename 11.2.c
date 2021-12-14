#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char heart[] = "I love Kelly!";
    const char* head = "I love Kelly!";

    for (int i = 0; i < 6; i++)
        putchar(heart[i]);
    putchar('\n');

    for (int i = 0; i < 6; i++)
        putchar(*(head++));
    putchar('\n');
}