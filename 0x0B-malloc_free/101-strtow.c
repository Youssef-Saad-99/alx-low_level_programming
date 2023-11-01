#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - function that splits a string into words.
 *
 * @str: pointer input
 *
 * Return: NULL str == NULL or str == ""
*/

char **strtow(char *str)
{
int i, length, word_count, index;
char **words;
char *token;

if (str == NULL || strcmp(str, "") == 0)
{
return ('\0');
}

length = strlen(str);
word_count = 0;

for (i = 0; i < length; ++i)
{
if (str[i] == ' ')
{
word_count++;
}
}
word_count++;

words = malloc((word_count + 1) * sizeof(char));

if (words == NULL)
{
return ('\0');
}

index = 0;
token = strtok(str, " ");

while (token != NULL)
{
words[index] = malloc((strlen(token) + 1) * sizeof(char));
strcpy(words[index], token);
index++;
token = strtok(NULL, " ");
}

words[index] = NULL;
return (words);
}
