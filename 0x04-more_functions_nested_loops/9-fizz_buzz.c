#include "main.h"
#include "stdio.h"

/**
 * main - Entry point
 *
 * Description:  prints the numbers from 1 to 100
 *		But for multiples of three print Fizz
 *		instead of the number and for the multiples of five print Buzz
 *		For numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && !((num % 5) == 0))
			printf("Fizz");
		else if ((num % 5) == 0 && num % 5 == 0)
			printf("Buzz");
		else if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf('\n');
	}
	return (0);
}
