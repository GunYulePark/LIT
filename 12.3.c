#include <stdio.h>

int el;
static int il;

int main()
{
	el = 1024;

	testLinkage();

	printf("%d\n", el);

	return 0;
}
