#include "main.h"

/**
 * _print_b - converts a number to binary
 * @number: the number to be converted
 *
 * Return: On success (binary conversion)
 */
int _print_b(long int number)
{
	static int count = 0;

	if ((number / 2) > 0)
		_print_b(number / 2);
	_putchar((number % 2) + '0');
	count++;

	return(count);
}
