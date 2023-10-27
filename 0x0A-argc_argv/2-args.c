#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument value
 *
 * Return: Always (0) Success
*/

int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s\n", *argv[i]);
	}
	return (0);
}
