#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fit_str(char* str, unsigned int size)
{
    if (strlen(str) > size)
        str[size] = '\0';
}
// char* my_strcat(char* destination, const char* source)
// {
//     char* ptr = destination + strlen(destination);
//     while (*source != '\0')
//         *ptr++ = *source++;
//     *ptr = '\0';

//     return destination;
// }

// char* my_strcat(char* destination, const char* source)
// {
//     int i, j;

//     for (i = 0; destination[i] != '\0'; i++);
//     for (j = 0; source[j] != '\0'; j++)
//     {
//         destination[i + j] = source[j];
//     }
//     destination[i + j] = '\0';

//     return destination;
// }

int main()
{
    // char msg[] = "Just,""do it!";
    // puts(msg);
    // printf("Length %d\n", strlen(msg));
    // fit_str(msg, 4);

    char str1[100] = "First string";
    char str2[] = "Second string";

    // strcat(str1, ", ");
    // strcat(str1, str2);

    // puts(str1);
    my_strcat(str1, str2);
    puts(str1);
    return 0;

}