#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// puts() which doesn't add a new line at the end
// Use pointer increment operator and putchar()
void custom_put(const char* str); // Only two lines
int custom_put2(const char* str);

void custom_put(const char* str)
{
    while (*str != '\0')
        putchar(*str++);
}
int custom_put2(const char* str)
{
    int i = 0;
    while (*str != '\0')
    {
        i++;
        putchar(*str++);
    }
    putchar('\n');
    
    return i;
}

int main()
{
    custom_put("hello");

    printf("%d\n", custom_put2("12345"));

    return 0;
}