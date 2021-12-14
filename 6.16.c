#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 4

int main()
{   
    int my_numbers[SIZE];
    int SUM = 0;
    int i;

    printf("Enter %d numbers : ", SIZE);

    for(int i = 0; i < SIZE; ++i)
        scanf("%d", &my_numbers[i]);
    
    for(int i = 0; i < SIZE; ++i)
        SUM += my_numbers[i];

    printf("SUM = %d\n", SUM);

    return 0;
}
