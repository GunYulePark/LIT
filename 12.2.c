#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>    

int main()
{
    int var_name = 3;
    int* pt = &var_name;

    printf("%d", pt);

    return 0;
}
