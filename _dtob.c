#include "main.h"
/**
 * _pow - function calculates a base raised to a power.
 * @base: the base number.
 * @pow: the exponent to which base should be raised.
 *
 * Return: integer which is exponent of the base to pow.
 */
int _pow(int base, int pow)
{
	int i, result = 1;

	for (i = 0; i < pow; i++)
		result *= base;

	return (result);
}

/**
 * _dtob - function that converts a decimal to binary.
 * @num: the number to be converted to base 2.
 *
 * Return: always 0 (success).
 */
int _dtob(int num)
{
	int i = 0, bufflen = 0, result, numCopy = num;

	char buffer[1024] = "";

	if (num < 0)
		num = -(num);
	while (_pow(2, i) <= num)
		i++;
	i -= 1;

	while (i >= 0)
	{
		result = _pow(2, i);
		if (result <= num)
		{
			bufflen = _add_to_buffer('1', buffer);
			num -= result;
		}
		else
		{
			bufflen = _add_to_buffer('0', buffer);
		}
		i--;
	}
	if (numCopy < 0)
		bufflen = _twoscomplement(buffer);
	for (i = 0; buffer[i]; i++)
		_putchar(buffer[i]);
	return (bufflen);
}
