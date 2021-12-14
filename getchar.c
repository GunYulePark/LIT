#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_LENGTH  64

int main()
{
    int key, i = 0;
    char str[MAX_LENGTH];

    printf("Input string :");
    
    while (1)
    {
    key = getchar();
    if (key == '\n')
        break;
    str[++i] = key;
    }

    printf("Output string : %s", str);
    return 0;
}