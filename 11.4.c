#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define STRLEN  15
char* custom_string_input(char* st, int n);

int main()
{
    // char words[STRLEN] = "";
    // fgets(words, STRLEN, stdin);

    // // //words를 차례대로 읽어서 마지막에 \n 나오는 걸 \0으로 바꾼다.
    // // while (int c == '\n')
    // //     for (int i = 0; i < STRLEN; ++i)
    // //         words[i] = '\0';

    // int i = 0;
    // while (words[i] != '\n' && words[i] != '\0')
    //     i++;
    // if (words[i] == '\n')
    //     words[i] = '\0';
    
    // fputs(words, stdout);
    // fputs("END", stdout);
    
    char str1[6], str2[6];
    puts("Write");
    int count = scanf_s("%5s %5s", str1, 6, str2, 6);
    printf("%s|%s \n", str1, str2);

    return 0;
}