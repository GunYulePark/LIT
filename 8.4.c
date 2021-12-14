#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{   
    char input;
    int num; // in count

    printf("Enter the letter of your choice:\n a. avengers b. beep\n c.count q. quit\n");

    // scanf("%c", &input);
    while (input = getchar())
    {
        if (input == 'a')
            printf("Avengers assemble!");

        if (input == 'b')
            printf("\a");

        if (input == 'c')
        {
            printf("Enter an integer:");
            scanf("%d", &num);
            for(int i = 0; i < num; ++i)
                printf("%d\n", i+1);
        }

        if (input == 'q')
            break;
    }

    return 0;
}