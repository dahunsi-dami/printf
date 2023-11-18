#include "main.h"
/**
 * _putchar - prints given character c to stdout of 1.
 * @c: character to be printed
 *
 * Return: returns 1 if successful and -1 if error's encountered
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _add_to_buffer - adds a specified string to a buffer.
 * @str: the string to be added to the buffer.
 * @buffer: the buffer to collect & hold the string.
 *
 * Return: returns the number of elements in the buffer.
 */
int _add_to_buffer(char *str, char *buffer)
{
	int i = 0, j = 0, k = 0;

	while (*buffer != '\0')
	{
		buffer++;
		i++;
	}

	for (k = 0; str[k] != '\0'; k++)
	{
		buffer[i] = str[k];
		i++;
	}

	for (j = 0; j < i; j++)
		_putchar(buffer[j]);
	_putchar('\n');
	return (i);
}
/**
 * _send_to_buffer  - function takes a string and adds it to buffer.
 * @s: the string to be added to the buffer.
 *
 * Return: always 0 (success).
 */
int _send_to_buffer(char *s)
{
	char buffer[1024] = "";

	char *test = s;

	_add_to_buffer(test, buffer);

	return (0);
}
