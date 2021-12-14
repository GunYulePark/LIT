#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    // int a = 1234;
    // printf("%p\n", &a);
    // printf("%d\n", a);
    
    // int *ptr = 1234;

    // printf("%p\n", ptr);
    // printf("%d\n", *ptr); // runtime error : problem from redirection
    int * safer_ptr = NULL;

    int a = 123;

    int b;
    scanf("%d", &b);

    if (b % 2 == 0)
        safer_ptr = &a;

    if (safer_ptr != NULL)
    {
        printf("%p\n", safer_ptr);
        printf("%d\n", *safer_ptr);
    }
        
}