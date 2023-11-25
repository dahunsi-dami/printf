#include "main.h"
/**
 * _twoscomplement - performs math op twos complement on bufer.
 * @buffer: the buffer containing binary form of number.
 *
 * Return: the length of the buffer.
 */
int _twoscomplement(char *buffer)
{
	int i = 0, j, k, len = 0;

	while (buffer[i])
		i++;
	i -= 1;
	while (i >= 0)
	{
		if (buffer[i] == '1')
			break;
		i--;
	}

	for (j = i - 1; j >= 0; j--, len++)
	{
		if (buffer[j] == '0')
			buffer[j] = 1 + '0';
		else if (buffer[j] == '1')
			buffer[j] = 0 + '0';
	}
	for (k = 0; buffer[k]; k++)
		len++;
	/*	if (buffer[k] == '1') */
	/*		break; */
	/* for (; buffer[k]; k++) */
	/*	len++; */
	return (len);
}
