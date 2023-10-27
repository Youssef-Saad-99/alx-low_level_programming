#include "main.h"

/**
 * _memcpy - A function that copies memory area
 *
 * @dest: First char input
 * @src: Second char input
 * @n: Third integer input
 *
 * Return: A pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
