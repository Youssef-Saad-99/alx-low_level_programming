#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 *
 * @s: First char input
 * @accept: Second char input
 *
 * Return: the byte in s that matches one of the bytes in accept, or NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *n;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				n = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
