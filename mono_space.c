#include <stdio.h>
#include <inttypes.h>

int main()
{
    int i;
    int32_t i32; // 32 bit integer

    i32 = 1004;

    printf("me32 = %d\n", i32);
    printf("me32 = %" "d" "\n", i32);
    printf("me32 = %" PRId32 "\n", i32);
    
    float salary;
    printf("$______\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\\n");
    
    
    float f5 = 0x1.1p1;
    printf("%f", f5);

    return 0;
}