#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int won = 0; 
    int dollar = 0;
    int rate = 0; // won-dollar exchange rate

    printf("Input won and exchange rate.\n");

    scanf("%d%d", &won, &rate);

    dollar = won / rate;

    printf("%dwon is %ddollar when the exchange rate is %dwon per dollar.\n", won, rate, dollar);

    return 0;
}