#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument value
 *
 * Return: Always (0) Success
*/

int main(int argc, char const *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
