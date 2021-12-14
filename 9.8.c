#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define FACTORIAL_NUMBER    5
long loop_factorial(int n);
long recursive_factorial(int n);

int main()
{
    long f1, f2;

    f1 = loop_factorial(FACTORIAL_NUMBER);
    printf("%ld\n", f1);

    f2 = recursive_factorial(FACTORIAL_NUMBER);
    printf("%ld\n", f2);
}

// long loop_factorial(int n)
// {
//     int i;
//     int fac = 1;
//     for (i = 1; i <= n; ++i)
//         fac *= i;

//     return fac;
// }

long loop_factorial(int n)
{
    long ans;

    for (ans = 1; n > 1; n--)
        ans *= n;

    return ans;
}

long recursive_factorial(int n)
{
    if (n > 0)
    {
        return n * recursive_factorial(n - 1); // tail recursion
    }
    else
        return 1;
}