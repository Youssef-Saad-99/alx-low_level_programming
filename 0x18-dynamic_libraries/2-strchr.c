#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 *
 * @s: First char input
 * @c: Second char input
 *
 * Return: the first occurrence of the character c in the string s, or NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
