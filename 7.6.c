#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{   
    unsigned num, div;
    bool isPrime;
    int sum = 0;

    scanf("%u", &num);
    //몫이 자기자신과 1밖에 없는 수
    //2~자기자신 제외한 밑에 수로 나눴을 때 나머지가 0 이 아닌.

    isPrime = true;

    for(div = 2; (div*div) <= num; ++div)
    {
        if (num % div == 0)
        {
            isPrime = false;
            if (num == div * div)
                printf("%u is divisible by %u.\n", num, div);
            else
                printf("%u is divisible by %u and %u.\n", num, div, num/div);
        }
            
    }
    if (isPrime)
        printf("Prime");
    else
        printf("Not Prime");
    
    return 0;
}
