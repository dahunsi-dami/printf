#include "main.h"

/**
 * _dtob - function that converts a decimal to binary.
 * @num: the number to be converted to base 2.
 *
 * Return: always 0 (success).
 */
int _dtob(int num)
{
	int i;
	int bufflen = 0, on_bit = 0, bit;
	char buffer[1024] = "";

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = sizeof(int) * 8 - 1; i >= 0; i--)
	{
		bit =  (num >> i) & 1;
		if (on_bit || bit)
		{
			on_bit = 1;
			buffer[bufflen] = bit + '0';
			bufflen++;
		}
	}

	for (i = 0; buffer[i]; i++)
		_putchar(buffer[i]);
	return (bufflen);
}
