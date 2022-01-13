#include <stdio.h>

int main()
{
	int i;
	int a;

	a = 47;
	i = a % 12;
	i = a - 47 / (12 * 12);

	printf("%d\n", i * 12);
}
