#include <stdio.h>
#include <inttypes.h>
#include <float.h>

int main()
{
    //round off error
    // float a, b;
    
    // a = 1.0E20f + 1.0f;
    // b = a - 1.0E20f;

    // printf("%f\n", b);

    // //0.01 100번 더해도 1 안나온다.
    // //2진수의 조합으로 10진수를 만드니까 생기는 오차
    // float a = 0.0f;

    // for(int i = 0; i < 100; i++)
    // {
    //     a += 0.01f;
    // }

    // printf("%f\n", a); 

    // //overflow
    
    // double max = 1.7976931348623158e+308;
    // printf("%f\n", max); 
    // max = max * 100.0f;
    // printf("%f\n", max); // inf: infinite 너무 큰 숫자

    // //underflow
    // float min = 1.401298464e-45F;
    // printf("%e\n", min);
    // min = min / 2.0f; // subnormal
    // printf("%e\n", min);

    float f = 104.0f;
    printf("%f\n", f); 
    f = f / 0.0f;
    printf("%f\n", f); 

    return 0;
}