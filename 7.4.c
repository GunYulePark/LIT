#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BASIC_DEDUCTION 1500000
int main()
{   
    float income, tax;
    float standard[7] = {0, 12000000, 46000000, 88000000, 150000000, 300000000, 500000000};
    float rate[8] = {0, .06, .15, .24, .35, .38, .40, .42};
    int i;
 

    // 기준보다 클 때 
    //기존거 채운거에다가 income 차액만큼 새로운 세율

    //12000000보다 크면 12000000까지는 .06적용하고 그 다음에 차액에 대해서 .15 적용해야지.
    printf("Input your income : ");
    scanf("%f", &income);
    income -= BASIC_DEDUCTION;

    for(i = 0; i <= 7; ++i)
        if (income >= standard[i])
            // float income_gap = (income - standard[i]);
            tax += (income - standard[i]) * (rate[i+1]- rate[i]);
            
    printf("%f", tax);


}

//빼서 0보다 큰값만큼 할당해서 그만큼 