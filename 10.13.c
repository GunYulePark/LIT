#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr0[3] = { 1, 2, 3 };
    int arr1[3] = { 4, 5, 6 };

    int* parr[2] = { arr0, arr1 };

    for (int j = 0; j < 2; ++j)
    {
        for (int i = 0; i < 3; ++i)
            printf("%d(==%d, %d, %d) ", parr[j][i], *(parr[j] + i), *(*(parr + j)+i), (*(parr + j))[i]);
        printf("\n");
    }
    printf("\n");

    printf("%p\n", &parr[0]); // parr[0]의 주소 (이중포인터)
    printf("%p\n", parr[0]);  // arr[0]과 같은 주소

    return 0;
}