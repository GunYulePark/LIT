#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float arr2d[2][4] = { {1.0f, 2.0f, 3.0f, 4.0f}, {5.0f, 6.0f, 7.0f, 8.0f} };

    float (*pa)[4]; // a SINGLE pionter to an array of 2 floats which has 4 floats
    float* ap[2]; // an array of TWO pointers-to-float (이중 포인터)

    pa = arr2d;

    ap[0] = arr2d[0];
    ap[1] = arr2d[1];

    printf("%u %u\n", (unsigned)pa, (unsigned)(pa + 1));
    //> pa는 단순히 포인터이므로 주소 자체를 대입-> arr2d[0] , arr2d[1]의 주소 출력
    printf("%u %u\n", (unsigned)ap, (unsigned)(ap + 1));
    //> ap는 포인터의 배열, 배열의 이름은 배열의 시작 주소를 의미 -> ap[0], ap[1]의 주소(포인터 변수의 주소 = 이중포인터) 출력

    return 0;


}