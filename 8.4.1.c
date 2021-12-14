#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char get_choice(void);
char get_first_char(void);
int get_integer(void);
void count(void);

void count(void)
{
    int num, i;
        printf("Enter an integer:\n");
        num = get_integer();
        for(i = 1; i <= num; ++i)
            printf("%d\n", i);
        while (getchar() != '\n')
            continue;
}

char get_first_char(void)
{
    int ch;

    ch = getchar();
    while (getchar() != '\n')
        continue;
    
    return ch;
}

int main()
{   
    int user_choice;
    
    printf("Enter the letter of your choice:\n a. avengers b. beep\n c.count q. quit\n");

    while ((user_choice = get_choice()) != 'q')
    {
        switch (user_choice)
        {
            case 'a':
                printf("Avengers assemble!");
                break;
            case 'b':
                putchar('\a');
                break;
            case 'c':
                count();
                break;
            default :
                printf("Error with %d.\n", user_choice);
                exit(1);
                break;
        }
    }

    // char input;
    // int num; // in count

    // printf("Enter the letter of your choice:\n a. avengers b. beep\n c.count q. quit\n");

    // // scanf("%c", &input);
    // while (input = getchar())
    // {
    //     if (input == 'a')
    //         printf("Avengers assemble!");

    //     if (input == 'b')
    //         printf("\a");

    //     if (input == 'c')
    //     {
    //         printf("Enter an integer:");
    //         scanf("%d", &num);
    //         for(int i = 0; i < num; ++i)
    //             printf("%d\n", i+1);
    //     }

    //     if (input == 'q')
    //         break;
    // }

    return 0;
}