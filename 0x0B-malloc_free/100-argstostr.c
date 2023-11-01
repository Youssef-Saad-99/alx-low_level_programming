#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 *
 * @ac: first input
 * @av: second input
 *
 * Return: NULL ac == 0 or av == NULL
*/

char *argstostr(int ac, char **av)
{
int i;
char *str;

if (ac == 0 || av == NULL)
{
return ('\0');
}

int length;
length = 0;

for (i = 0; i < ac; ++i)
{
length += strlen(av[i]) + 1;
}

str = malloc(length *sizeof(char));

if (str == NULL)
{
return ('\0');
}

int index;
index = 0;

for (i = 0; i < ac; ++i)
{
strcat(str + index, av[i]);
index += strlen(av[i]);
str[index++] = '\n';
str[index - 1] = '\0';
return (str);
}
}
