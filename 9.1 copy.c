#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen()
#include <stdbool.h>

#define WIDTH   60
#define NAME    "PARK-GEON YOUL"
#define ADDRESS "SEOUL, KOREA"
#define GREET   "Gentle men and ladies"

void print_multiple_chars(char c, int numbers, bool print_newline);
void print_centered_str(char str[]);

int main()
{
    print_multiple_chars('*', WIDTH, true);

    print_centered_str(NAME);
    print_centered_str(ADDRESS);
    print_centered_str(GREET);

    print_multiple_chars('*', WIDTH, false);

    return 0;
}

void print_multiple_chars(char c, int numbers, bool print_newline)
{
    int i;

    for(i = 0; i < numbers; ++i)
        printf("%c", c);
    
    if (print_newline)
        printf("\n");
}

void print_centered_str(char str[])
{
    int n_blanks = 0; // 안에서 쓰이는 변수는 안에서 정의
    n_blanks = (WIDTH - strlen(str)) / 2;
    
    print_multiple_chars(' ', n_blanks, false);
    printf("%s\n", str);
}