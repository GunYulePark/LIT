#include <stdio.h>

int main()
{
    double num = 0;
    printf("Enter an integer (q to quit) : ");
    scanf("%d", &add);

    if (num == 'q')
        printf("Sum = 0");

    while (num != 'q')
    {
        printf("Enter next integer (q to quit) : ")
        scanf("%d", &add);
        num += add
    }
    printf("Sum = %d", num);

    return 0;
}