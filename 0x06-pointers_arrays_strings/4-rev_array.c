#include "main.h"

/**
 * reverse_array- reverses the content of an array of integers
 * @a: array to be reversed
 * @n: the number of elements of the array
 *
 */
void reverse_array(int *a, int n)
{
	int cnt;

	cnt = n - 1;

	int b;

	for (b = 0; b < n; cnt--)
	{
		a[b] = a[cnt];
		b++;
	}
}
