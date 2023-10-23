#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 *
 * @s: First char input
 * @b: second char input
 * @n: Third integer input
 *
 * Return: A pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned in itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}
