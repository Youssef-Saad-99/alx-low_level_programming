#include "main.h"

/**
 * _strstr - A function that locates a substring.
 *
 * @haystack: Main string input
 * @needle: Substring input
 *
 * Return: the beginning of the located substring,
 *	or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return ((char *) haystack);
	}
	while (*haystack != '\0')
	{
		const char *h = haystack;
		const char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return ((char *) haystack);
		}
		haystack++;
	}
	return (NULL);
}
