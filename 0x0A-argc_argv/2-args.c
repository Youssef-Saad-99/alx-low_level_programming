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

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
