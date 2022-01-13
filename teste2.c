#include <stdio.h>

int a;

int main()
{
	{
		int a;
		a = 42;
	}
	a = 12;
	printf("%d\n", a);
}
