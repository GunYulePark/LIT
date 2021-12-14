#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>

#define STOP '.'

int main()
{   
    double num[100]; //이렇게 하면 빈 배열 정의 되나?
    double n, min, max, ave; // num 이거 이런식으로 설정해도 되나? 배열이랑 이름 겹치는데
    double a, b, sum;  // a: max, b : min, c : ave
    int count, i;

    for (i = 0; ; ++i)
    {
        scanf("%lf", &n);
        if (n == 'q')
            break;
        num[i] = n;
        count++;
    }
    // 배열 원소의 개수 세는 법??
    //계속 애들 ? : 로 싸움 붙여서 남는 애로
    //밑에 for문은 끝을 정해놔야할듯. 안그럼 에러 날 거 같은데 > count로 한다.
    
    
    for (i = 1, a = num[0]; i < count; ++i) // max
        (a > num[i+1]) ? a : a = num[i+1];
    max = a;

    for (i = 1, b = num[0]; i < count; ++i) // max
        (b < num[i+1]) ? b : b = num[i+1];
    min = b;

    for (i = 0, b = num[0]; i < count; ++i)
        sum += num[i];
    ave = sum / count;

    printf("min = %f, max = %f, ave = %f", min, max, ave);

    return 0;
}