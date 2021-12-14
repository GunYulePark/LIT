#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    double seed_money, target_money, annual_interest;

    printf("Input seed money : ");
    scanf("%lf", &seed_money);
    printf("Input target money : ");
    scanf("%lf", &target_money);
    printf("Input annual_interest (%%) : ");
    scanf("%lf", &annual_interest);

    double fund = seed_money;
    int year = 0;

    while (fund < target_money)
    {
        fund += fund * annual_interest / 100);
        fund = fund + 800;
        year += 1;
        printf("%lf\n",fund);
    }
    
    printf("It takes %d years", year);

    return 0;
}