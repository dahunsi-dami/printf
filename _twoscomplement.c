#include "main.h"
/**
 * _twoscomplement - performs math op twos complement on bufer.
 * @b: the number to be converted.
 * @buffer: the buffer containing binary form of number.
 *
 * Return: the length of the buffer.
 */
int _twoscomplement(long int b, char *buffer)
{
	long int i, bit, length = 0;

	for (i = sizeof(long int) * 8 - 1; i >= 0; i--)
	{
		bit = (b >> i) & 1;
		buffer[length] = bit + '0';
		length++;
	}

	return (length);
}
