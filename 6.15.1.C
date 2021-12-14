#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//0~3까지 출력
// 0
// 0 1
// 0 1 2
// 0 1 2 3

int main()
{   
    for(int a = 0; a < 4; a++)
    {
        for(int b = 0; b <= a ; b++)
            printf("%d ", b);
        printf("\n");
    }

    return 0;
}