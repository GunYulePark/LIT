#include <stdio.h>

int main()
{
    int sum = 0, add = 0;

    printf("Enter an integer (q to quit) : ");

    while (scanf("%d", &add) == 1)
    {
        sum += add;
        printf("Enter next integer (q to quit) : ");
    }

    printf("Sum = %d", sum); 
    // num에 계속 add 더해지는데 어떻게 q로 마치냐??
    //add가 q인 경우에 break 하고 맨 마지막에 sum을 printf 한다.
    // 문자를 아예 인식하지 못하는 문제... 어찌해결. 받는 걸 문자로 받을지 숫자로 받을지 자동 분류?

    return 0;
}