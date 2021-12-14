#include <stdio.h>

int main()
{
    int sum = 0, add = 0;
    printf("Enter an integer (q to quit) : ");
    scanf("%d", &add);
    if (add == 'q')
        printf("Sum = 0");

    while (add != 'q') // add != q 일때만
    {
        if (add == 'q')
            break;

        printf("Enter next integer (q to quit) : ");
        scanf("%d", &add);
        sum += add;
    }

    printf("Sum = %d", sum); 
    // num에 계속 add 더해지는데 어떻게 q로 마치냐??
    //add가 q인 경우에 break 하고 맨 마지막에 sum을 printf 한다.

    return 0;
}