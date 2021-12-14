#include <stdio.h>
#include <inttypes.h>

int main()
{
    float f5 = 0xa.bp1;
    printf("%f", f5);

    double d5 = 1.0625e0;
    printf("%f", d5);

    return 0;
}