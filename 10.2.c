#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MONTHS  12

int main()
{
    // int high[MONTHS] = { 2, 5, 11, 18, 23, 27, 29, 30, 26, 20, 12, 4 };
    
    // for (int i = 0; i < MONTHS; ++i)
    //     printf("%d ", high[i]);
    // printf("\n");

    // high[0] = 1;

    // printf("%p %p\n", high, &high[0]);

    // const int power_of_twos[] = { 1, 2, 4, 8, 16, 32, 64 };
    // printf("%d\n", sizeof(power_of_twos));
    // printf("%d\n", sizeof(power_of_twos[0]));

    // for (int i = 0; i < sizeof(power_of_twos) / sizeof(power_of_twos[0]); ++i)
    //     printf("%d ", power_of_twos[i]);

    double arr[10];
    double *ptr1 = &arr[1], *ptr2 = &arr[3];

    int i = ptr2 - ptr1;

    printf("%lld %lld %d\n", (long long)ptr1, (long long)ptr2, i);

    return 0;
}