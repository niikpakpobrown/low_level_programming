#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer to be swapped
 * @b: integers to be sewapped
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
