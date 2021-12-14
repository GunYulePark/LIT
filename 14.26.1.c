#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

int a=1;
int b=2;
int c=0;

int plus(int i, int j)
{
    int h=0;
    h = i + j;

    return h;
}
int main()
{
    c = plus(a, b);
    printf("%d", c);
   
    return 0;

}
