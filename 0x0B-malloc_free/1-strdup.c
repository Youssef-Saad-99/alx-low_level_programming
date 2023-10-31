#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 *	 in memory
 *	, which contains a copy of the string given as a parameter.
 *
 * @str: pointer input
 *
 * Return: a pointer to the duplicated string
 *	NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
int i = 0, size = 0;
char *m;

if (str == NULL)
{
return (NULL);
}
for (; str[size] != '\0'; size--)
;

m = malloc(size * sizeof(*str) + 1);

if (m == 0)
}
return (NULL);
}
else
{
for (; i < size; i++)
{
m[i] = str[i];
}
return (m);
}
