#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 *	, and initializes it with a specific char.
 *
 * @size: first input
 * @c: second input
 *
 * Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (0);
	}
	else
	{
		char *y = malloc(size);

		while (size--)
		{
			y[size] = c;
		}
		return (y);
	}
}
