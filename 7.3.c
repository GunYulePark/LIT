#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{   
    char ch;

    //ch = getchar();
    //putchar(ch);

    while((ch = getchar()) != '\n')
    {
        // for(int i = '0'; i <= '9'; ++i)
            // if(ch == i)
        if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);
        if (isdigit(ch))
            ch = '*';

        putchar(ch);
    }

    return 0;
}