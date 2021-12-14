#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double compute_power(int number, int power);

int main()
{   
    int number, result, power;

    while(scanf("%d %d", &number, &power) == 2)
    {
        result = compute_power(number, power); //upper result is assigned to below result.
        printf("Result : %d\n", result);
    }

    return 0;
}

double compute_power(int number, int power)
{
    int i, result;

    result = 1;
    for(i = 0; i < power; ++i)
        result *= number;

    return result;
}