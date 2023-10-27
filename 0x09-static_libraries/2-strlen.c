#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 *
 * @s: pointer takes char
 *
 * Return: length of a string
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
	++i;
	}
	return (i);
}
