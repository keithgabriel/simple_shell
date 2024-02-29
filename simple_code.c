#include "shell.h"
/**
 * simple_code  - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void simple_code(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
