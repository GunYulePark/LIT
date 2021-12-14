#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>	// pow()
#include <string.h>	// strlen()
#include <stdlib.h>	// exit()

unsigned char to_decimal(const char bi[]);

int main()
{
	printf("Binary (string) to Decimal conversion\n");
	
	printf("%d\n", to_decimal("00000110"));
	printf("%d\n", to_decimal("00010110"));
	printf("%d\n", to_decimal("10010100"));
	
	return 0;
}

unsigned char to_decimal(const char bi[])
{
	int i = 0;
	int n = sizeof(bi);
	int sum = 0;
	for (int i = 0; i <= n; i++)
		if ((int)bi[i] == 1)
			sum += pow(2, (n - i));

	return (unsigned char)sum;
}
