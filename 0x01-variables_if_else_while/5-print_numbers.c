#include<stdio.h>

/**
 * main-  prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 * Return: always 0
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
		printf("%d", b);
	printf("\n");
	return (0);
}
