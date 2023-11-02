#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: char input
 * @s2: char input
 * @n: integer input
 *
 * Return:  pointer shall point to a newly allocated space in memory
 *	, which contains s1, followed by the first n bytes of s2
 *	, and null terminated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	char *str;
	unsigned int i, j, s1_length, s2_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return ('\0');
	}
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
