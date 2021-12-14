#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "Hello";

    printf("%zu %zu\n", sizeof(str1), strlen(str1));
    
    return 0;
}