#include"main.h"
#include<stdio.h>

/**
 * *_strdup - copies a string
 * @str: string to be copied
 *
 * Return: pointer to the copied string
 */
char *_strdup(char *str)
{
	unsigned int i, a;

	i = 0;
	a = 0;

	char *p;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	while (a < i)
	{
		p[a] = str[a];
		a++;
	}

	return (p);
}
