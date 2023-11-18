#include "main.h"

/**
 * _add_to_buffer - adds a specified character to a buffer.
 * @s: the character to be added to the buffer.
 * @buffer: the buffer to collect & hold the string.
 *
 * Return: returns the number of elements in the buffer.
 */
int _add_to_buffer(char s, char *buffer)
{
	int i = 0, j = 0;

	while (*buffer != '\0')
	{
		buffer++;
		i++;
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		buffer[i] = str[j];
		i++;
	}

	return (i);
}
