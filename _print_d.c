#include "main.h"

/**
 * _print_d - prints and integer to standard output
 * @number: number to be printed
 *
 * Return: On success (length of string
 * otherwise (-1))
 */
int _print_d(int number)
{
	int numCopy, denom = 1, result;
	int count = 0;

	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}

	numCopy = number;

	while (numCopy > 10)
	{
		denom *= 10;
		numCopy /= 10;
	}

	while (denom > 0)
	{
		result = number / denom;
		_putchar(result + '0');
		number %= denom;
		denom /= 10;
		count++;
	}

	return (count);
}
