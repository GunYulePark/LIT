#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{   
    char ch;

    //ch = getchar();
    //putchar(ch);

    while((ch = getchar()) != '\n')
    {
        // for(int i = '0'; i <= '9'; ++i)
            // if(ch == i)
        if (ch >= 'a' && ch <= 'z')
            ch -= 32;
        else if (ch >= 'A' && ch <= 'Z')
            ch += 32;
        else ch = '*';

        putchar(ch);
    }

    return 0;
}