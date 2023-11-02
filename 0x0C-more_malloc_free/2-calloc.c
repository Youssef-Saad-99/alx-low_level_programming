#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - fills memory with const byte
 *
 * @s: pointer input
 * @b: char input
 * @n: integer input
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s++ = b;
	}
	return (ptr);
}

/**
 * _calloc - function that allocates memory for an array.
 * Description: function that allocates memory for an array.
 * @nmemb: first input
 * @size: second input
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return ('\0');
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return ('\0');
	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
