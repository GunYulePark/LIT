#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int count = 0;

    while(1)
    {
        printf("Current count is %d. Continue? (y/n)\n", count);

        int c = getchar();
        if (c == 'n')
        {
            break;            
        }
        else if (c == 'y')
        {
            while (getchar() != '\n')
                continue;

            count++;
        }
        else
        {
            printf("Please input y or n.\n");
        }


    }
    
    return 0;
}