#include <stdio.h>
#include  <limits.h>
#include <stdlib.h>

int main()
{
    unsigned int u_max = 0 - 1; // 최대값을 알아볼 수 있도록 하는 것
    // 0000 - 1 = 1111
    // i to binary representation
    char buffer[33];
    _itoa(u_max, buffer, 2);

    // print decimal and binary
    printf("deimal: %u\n", u_max);
    printf("binary: %s\n",buffer);
//    printf("%u\n", sizeof(unsigned int)); // %u : unsigned
//    printf("%u\n", sizeof(i));
//
//    return 0;
}
