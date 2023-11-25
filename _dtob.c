#include "main.h"

/**
 * _dtob - function that converts a decimal to binary.
 * @num: the number to be converted to base 2.
 *
 * Return: always 0 (success).
 */
int _dtob(long int num)
{
	long int i;
	int bufflen = 0;
	char buffer[1024] = "";

	if (num == 0)
	{
			_putchar('0');
			return (1);
	}

	if (num < 0)
	{
			bufflen = _twoscomplement(num, buffer);
			return (bufflen);
	}
	else if (num > 0)
	{
			for (i = sizeof(long int) * 8 - 1; i >= 0; i--)
			{
					buffer[bufflen] = (num >> i) & 1;
					bufflen++;
			}
	}

	for (i = 0; buffer[i]; i++)
			_putchar(buffer[i]);
	return (bufflen);
}
