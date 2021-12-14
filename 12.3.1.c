#include <stdio.h>

extern int el;

void testLinkage()
{
	printf("Dosomething called\n");
	printf("%d\n", el);

	el++;
}