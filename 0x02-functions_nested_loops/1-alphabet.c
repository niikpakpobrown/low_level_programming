#include "main.h"

/**
 * main- prints out the aplhabets
 */
void print_alphabet(void);
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
