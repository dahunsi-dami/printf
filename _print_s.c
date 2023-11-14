#include "main.h"
/**
 * _print_s - a function printing a string minus null byte.
 * @str: the string passed to the function.
 *
 * Return: the length of the string minus null byte.
 */
int _print_s(char *str)
{
	int i;

	if (str == NULL)
		exit(-1);
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
