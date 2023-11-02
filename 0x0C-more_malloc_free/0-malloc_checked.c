#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: integer input
 *
 * Return: pointer s
*/

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == 0)
		exit(98);
	return (s);
}
